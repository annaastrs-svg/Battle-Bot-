#include <WiFi.h>
#include <WebServer.h>
#include <ESP32Servo.h>

// ---- Config de la red que crea el robot ----
const char* ssid = "LaminaxBot";
const char* password = "hacha1234";

WebServer server(80);

// ---- Servo del hacha ----
Servo hacha;
const int SERVO_PIN = 23;
const int REPOSO = 0;
const int ATAQUE = 180;

// ---- Pines del puente H (DRV8833) ----
int AIN1 = 16;  // motor izquierdo
int AIN2 = 17;
int BIN1 = 18;  // motor derecho
int BIN2 = 19;

// ---- Seguridad: si dejamos de recibir señal, el robot se para solo ----
unsigned long ultimoComando = 0;
const unsigned long TIEMPO_LIMITE = 500; // milisegundos sin señal = freno

// ---- Pagina web con el joystick tactil ----
const char paginaHTML[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no">
<title>Laminax Bot</title>
<style>
  body { background:#111; color:#fff; font-family:sans-serif; text-align:center;
         margin:0; padding:20px; touch-action:none; user-select:none; }
  h2 { margin-bottom:5px; }
  #estado { color:#888; font-size:14px; margin-bottom:10px; }
  #base { width:220px; height:220px; border-radius:50%; background:#333;
          margin:20px auto; position:relative; }
  #stick { width:80px; height:80px; border-radius:50%; background:#e74c3c;
           position:absolute; top:70px; left:70px; }
  #atacar { width:150px; height:150px; border-radius:50%; background:#27ae60;
            color:#fff; font-size:22px; border:none; margin-top:30px; }
  #atacar:active { background:#2ecc71; }
</style>
</head>
<body>
<h2>Laminax Bot</h2>
<div id="estado">conectado</div>
<div id="base"><div id="stick"></div></div>
<button id="atacar">ATACAR</button>

<script>
let base = document.getElementById('base');
let stick = document.getElementById('stick');
let atacar = document.getElementById('atacar');
let estado = document.getElementById('estado');
let x = 0, y = 0, a = 0;
let dragging = false;
let enviando = false;

function centrar() {
  stick.style.left = '70px';
  stick.style.top = '70px';
  x = 0; y = 0;
}

function mover(clientX, clientY) {
  let rect = base.getBoundingClientRect();
  let cx = rect.left + rect.width/2;
  let cy = rect.top + rect.height/2;
  let dx = clientX - cx;
  let dy = clientY - cy;
  let max = 70;
  let dist = Math.sqrt(dx*dx + dy*dy);
  if (dist > max) { dx = dx/dist*max; dy = dy/dist*max; }
  stick.style.left = (70 + dx) + 'px';
  stick.style.top = (70 + dy) + 'px';
  x = Math.round((dx/max) * 255);
  y = Math.round((-dy/max) * 255);
}

base.addEventListener('touchstart', e => { dragging = true; mover(e.touches[0].clientX, e.touches[0].clientY); });
base.addEventListener('touchmove', e => { if(dragging) mover(e.touches[0].clientX, e.touches[0].clientY); });
base.addEventListener('touchend', e => { dragging = false; centrar(); });

atacar.addEventListener('touchstart', () => { a = 1; });
atacar.addEventListener('touchend', () => { a = 0; });

setInterval(() => {
  if (enviando) return; // no manda uno nuevo si el anterior no ha llegado
  enviando = true;
  fetch(`/cmd?x=${x}&y=${y}&a=${a}`)
    .then(() => estado.textContent = 'conectado')
    .catch(() => estado.textContent = 'sin conexion...')
    .finally(() => enviando = false);
}, 50);
</script>
</body>
</html>
)rawliteral";

void moverMotores(int x, int y) {
  int izquierda = constrain(y + x, -255, 255);
  int derecha   = constrain(y - x, -255, 255);

  if (izquierda >= 0) { analogWrite(AIN1, izquierda); analogWrite(AIN2, 0); }
  else                { analogWrite(AIN1, 0); analogWrite(AIN2, -izquierda); }

  if (derecha >= 0) { analogWrite(BIN1, derecha); analogWrite(BIN2, 0); }
  else              { analogWrite(BIN1, 0); analogWrite(BIN2, -derecha); }
}

void handleRoot() {
  server.send(200, "text/html", paginaHTML);
}

void handleCmd() {
  int x = server.arg("x").toInt();
  int y = server.arg("y").toInt();
  int a = server.arg("a").toInt();

  ultimoComando = millis();
  moverMotores(x, y);
  hacha.write(a == 1 ? ATAQUE : REPOSO);

  server.send(200, "text/plain", "ok");
}

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
  Serial.print("Abre en tu celular: http://");
  Serial.println(WiFi.softAPIP());
  Serial.println("=====================================");

  server.on("/", handleRoot);
  server.on("/cmd", handleCmd);
  server.begin();
}

void loop() {
  server.handleClient();

  if (millis() - ultimoComando > TIEMPO_LIMITE) {
    moverMotores(0, 0);
    hacha.write(REPOSO);
  }
}
