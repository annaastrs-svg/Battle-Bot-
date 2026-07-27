#include <WiFi.h>
#include <WiFiUdp.h>
#include <ESP32Servo.h>

// ---- Config de la red que crea el robot ----
const char* ssid = "LaminaxBot";
const char* password = "hacha1234";
unsigned int localPort = 4210;

WiFiUDP udp;
char packet[64];

// ---- Servo del hacha ----
Servo hacha;
const int SERVO_PIN = 5;
const int REPOSO = 0;     // angulo en descanso
const int ATAQUE = 180;   // angulo atacando

// ---- Pines del puente H (DRV8833) ----
int AIN1 = 0;  // motor izquierdo
int AIN2 = 1;
int BIN1 = 2;  // motor derecho
int BIN2 = 3;

// ---- Seguridad: si dejamos de recibir señal, el robot se para solo ----
unsigned long ultimoPaquete = 0;
const unsigned long TIEMPO_LIMITE = 500; // milisegundos sin señal = freno

void setup() {
  Serial.begin(115200);

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);

  hacha.attach(SERVO_PIN);
  hacha.write(REPOSO);

  WiFi.softAP(ssid, password);
  Serial.println("=====================================");
  Serial.print("Red creada: ");
  Serial.println(ssid);
  Serial.print("Contrasena: ");
  Serial.println(password);
  Serial.print("IP del robot: ");
  Serial.println(WiFi.softAPIP()); // normalmente 192.168.4.1
  Serial.println("=====================================");

  udp.begin(localPort);
}

void moverMotores(int x, int y) {
  int izquierda = constrain(y + x, -255, 255);
  int derecha   = constrain(y - x, -255, 255);

  if (izquierda >= 0) { analogWrite(AIN1, izquierda); analogWrite(AIN2, 0); }
  else                { analogWrite(AIN1, 0); analogWrite(AIN2, -izquierda); }

  if (derecha >= 0) { analogWrite(BIN1, derecha); analogWrite(BIN2, 0); }
  else              { analogWrite(BIN1, 0); analogWrite(BIN2, -derecha); }
}

void loop() {
  int packetSize = udp.parsePacket();
  if (packetSize) {
    int len = udp.read(packet, sizeof(packet) - 1);
    packet[len] = 0;
    ultimoPaquete = millis();

    int x = 0, y = 0, a = 0;
    sscanf(packet, "%d,%d,%d", &x, &y, &a);

    moverMotores(x, y);
    hacha.write(a == 1 ? ATAQUE : REPOSO);
  }

  // Si no llega nada por medio segundo, freno total (por si se corta el wifi)
  if (millis() - ultimoPaquete > TIEMPO_LIMITE) {
    moverMotores(0, 0);
    hacha.write(REPOSO);
  }
}
