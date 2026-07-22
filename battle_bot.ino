#include <ESP32Servo.h>

// Definición de pines según el tablero de conexiones
#define IN1 0  // Motor Izquierdo (Avanzar)
#define IN2 1  // Motor Izquierdo (Retroceder)
#define IN3 2  // Motor Derecho (Avanzar)
#define IN4 3  // Motor Derecho (Retroceder)

#define SERVO1_PIN 4 // Servo SG90 #1
#define SERVO2_PIN 5 // Servo SG90 #2

Servo servo1;
Servo servo2;

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("\n==========================================");
  Serial.println("  INICIANDO PRUEBA DE HARDWARE ROBOT");
  Serial.println("==========================================\n");

  // Configurar pines del controlador MX1508 como salidas
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Asegurar que los motores estén apagados al inicio
  pararMotores();

  // Asignar los pines PWM a los servos
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  servo1.setPeriodHertz(50); // Frecuencia estándar de 50Hz
  servo2.setPeriodHertz(50);

  servo1.attach(SERVO1_PIN, 500, 2400); // Ancho de pulso min y máx en us
  servo2.attach(SERVO2_PIN, 500, 2400);

  // Posición inicial neutra (90 grados)
  servo1.write(90);
  servo2.write(90);
  delay(1000);
}

void loop() {
  // ----------------------------------------------------
  // 1. PRUEBA MOTOR IZQUIERDO
  // ----------------------------------------------------
  Serial.println("[1/4] Motor Izquierdo: AVANZAR");
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(1500);

  Serial.println("[1/4] Motor Izquierdo: RETROCEDER");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(1500);

  pararMotores();
  delay(1000);

  // ----------------------------------------------------
  // 2. PRUEBA MOTOR DERECHO
  // ----------------------------------------------------
  Serial.println("[2/4] Motor Derecho: AVANZAR");
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1500);

  Serial.println("[2/4] Motor Derecho: RETROCEDER");
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(1500);

  pararMotores();
  delay(1000);

  // ----------------------------------------------------
  // 3. PRUEBA SERVO 1
  // ----------------------------------------------------
  Serial.println("[3/4] Servo 1: Moviendo a 0°");
  servo1.write(0);
  delay(1000);

  Serial.println("[3/4] Servo 1: Moviendo a 180°");
  servo1.write(180);
  delay(1000);

  Serial.println("[3/4] Servo 1: Regresando a 90°");
  servo1.write(90);
  delay(1000);

  // ----------------------------------------------------
  // 4. PRUEBA SERVO 2
  // ----------------------------------------------------
  Serial.println("[4/4] Servo 2: Moviendo a 0°");
  servo2.write(0);
  delay(1000);

  Serial.println("[4/4] Servo 2: Moviendo a 180°");
  servo2.write(180);
  delay(1000);

  Serial.println("[4/4] Servo 2: Regresando a 90°");
  servo2.write(90);
  delay(1000);

  Serial.println("\n--- Secuencia terminada. Repitiendo ciclo en 3s ---\n");
  delay(3000);
}

// Función auxiliar para detener todos los motores
void pararMotores() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
