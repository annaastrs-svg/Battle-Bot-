Laminax Bot 
---
Laminax es un Battle bot de pelea con una arma tipo hacha controlada por dos servomotores 180.
funciona gracias a un esp32 c3 super mini, controlado por un control LogiTECH y movilidad por dos motores N20,
es alimentado por una bateria de 7.4 V y 6800 mAh, tiene un boton con COM,NC,NO para seguridad y un LED piloto.

CAD
---
en el cad estan los dos motores dc, llantas y dos servomotores para dar una idea de el acomodo
<img width="847" height="663" alt="Captura de pantalla 2026-07-23 124531" src="https://github.com/user-attachments/assets/57bc70e7-fa77-4563-a5a3-564a83ee6e1c" />
<img width="745" height="712" alt="Captura de pantalla 2026-07-23 124538" src="https://github.com/user-attachments/assets/0270ad37-3a21-4fc6-bb3a-d2c20eb3c575" />

KiCAD
---
3D VIEW
<img width="1917" height="1198" alt="Captura de pantalla 2026-07-22 165208" src="https://github.com/user-attachments/assets/58128697-4cad-4024-be44-1301f47d20df" />

PCB
<img width="1238" height="907" alt="Captura de pantalla 2026-07-23 202517" src="https://github.com/user-attachments/assets/57b8b40a-67cc-491e-8629-4b0b1eefc47e" />


ESCHEMATIC
<img width="1177" height="966" alt="Captura de pantalla 2026-07-23 105936" src="https://github.com/user-attachments/assets/69882bae-b026-490f-b4c5-a84f4158ef7f" />

CODE
---

el codigo es c++, corrido en arduino IDE 
<img width="1060" height="1025" alt="image" src="https://github.com/user-attachments/assets/e7324c5c-d809-4c3a-a24d-20b6754dcfed" />
este es el codigo d prueba

<img width="1152" height="433" alt="Captura de pantalla 2026-07-22 132637" src="https://github.com/user-attachments/assets/86463edb-33df-43ce-b8a9-e80600dd88f1" />
esto es lo que muestra la terminal una vez que se corre el codigo, uso esto para ver que hay seguimiento y buen cierre de circuito



## 📋 Lista de Materiales (BOM)

| Componente | Descripción | Cantidad | Costo | Referencia |
|---|---|---|---|---|
| Motores N20 | Motores principales | 2 | $13.00 | Kit 2 Piezas De Motorreductor Motor 30:1 298: 150:1 50:1 N20 · Envío gratis |
| Servo Motores 180° | Motores de arma | 2 | $5.69 | Tecneu 2 Servomotor Micro Sg90 1.6kg Servo Motor Arduino Pic 180° · Envío gratis |
| Buck Converter | Convertidor de energía | 1 | $11.50 | 10 Pzas Regulador De Voltaje Dc-dc Lm2596 Ajustable 1.25-30v · Envío gratis |
| Botón NC | Botón normalmente cerrado | 1 | $3.96 | Microswitch Para Horno De Microondas 16a 125v N Abierto · Meses sin interés |
| LED Piloto | Método de seguridad | 1 | $4.14 | Lámpara Indicadora Luz Led Piloto Empotrable 22mm 110v · Meses sin interés |
| Driver Puente H | Controla los motores | 1 | $9.25 | 10 Piezas Puente H Mx1508 Mini L298n Doble Pwm Driver Motor · Envío gratis |
| ESP32-C3 SuperMini | Cerebro del circuito | 1 | $5.63 | Esp32-c3 Esp32 Supermini Wifi Bluetooth · Envío gratis |
| Batería 7.4V 8A | Alimentación principal | 2 | $39.76 | Batería Para Coches, Helicóptero Rc Wltoys, Lipo 18650 2s 7.4V · Meses sin interés |
| Kit de Cables Dupont | Cables | 1 | $5.30 | 120 Cables Dupont Extra Largos 30cm Macho-Macho: Plug/Plug · Envío gratis |

 aprox $98.23

## Tabla de Conexiones

<table>
<thead>
<tr><th colspan="2">Viene de</th><th colspan="2">Va a</th></tr>
<tr><th>Componente</th><th>Pin</th><th>Componente</th><th>Pin</th></tr>
</thead>
<tbody>
<tr><td>ESP32 Super Mini</td><td>5</td><td>Servo Motor 1</td><td>S</td></tr>
<tr><td>ESP32 Super Mini</td><td>4</td><td>Servo Motor 2</td><td>S</td></tr>
<tr><td>ESP32 Super Mini</td><td>3</td><td>Puente H</td><td>IN4</td></tr>
<tr><td>ESP32 Super Mini</td><td>2</td><td>Puente H</td><td>IN3</td></tr>
<tr><td>ESP32 Super Mini</td><td>1</td><td>Puente H</td><td>IN2</td></tr>
<tr><td>ESP32 Super Mini</td><td>0</td><td>Puente H</td><td>IN1</td></tr>
<tr><td>ESP32 Super Mini</td><td>GND</td><td>Protoboard</td><td>GND Común</td></tr>
<tr><td>ESP32 Super Mini</td><td>5V</td><td>Protoboard</td><td>5V</td></tr>
<tr><td>Puente H</td><td>Motor B</td><td>Motor B</td><td>S</td></tr>
<tr><td>Puente H</td><td>Motor A</td><td>Motor A</td><td>S</td></tr>
<tr><td>Puente H</td><td>GND</td><td>Protoboard</td><td>GND Común</td></tr>
<tr><td>Puente H</td><td>5V</td><td>Protoboard</td><td>Directa</td></tr>
<tr><td>Servo Motor 1</td><td>GND</td><td>Protoboard</td><td>GND Común</td></tr>
<tr><td>Servo Motor 1</td><td>5V</td><td>Protoboard</td><td>5V</td></tr>
<tr><td>Servo Motor 2</td><td>GND</td><td>Protoboard</td><td>GND Común</td></tr>
<tr><td>Servo Motor 2</td><td>5V</td><td>Protoboard</td><td>5V</td></tr>
<tr><td>Buck Converter</td><td>IN+</td><td>Protoboard</td><td>Directa</td></tr>
<tr><td>Buck Converter</td><td>IN-</td><td>Protoboard</td><td>GND Común</td></tr>
<tr><td>Buck Converter</td><td>OUT+</td><td>Protoboard</td><td>5V</td></tr>
<tr><td>Buck Converter</td><td>OUT-</td><td>Protoboard</td><td>GND Común</td></tr>
<tr><td>Botón</td><td>NC</td><td>No conectado</td><td>No conectado</td></tr>
<tr><td>Botón</td><td>NO</td><td>Protoboard</td><td>Directa</td></tr>
<tr><td>Botón</td><td>COM</td><td>Batería</td><td>Positivo</td></tr>
<tr><td>LED Piloto</td><td>S</td><td>Protoboard</td><td>Directa</td></tr>
<tr><td>LED Piloto</td><td>Negativo</td><td>Protoboard</td><td>GND Común</td></tr>
<tr><td>Batería</td><td>Negativo</td><td>Protoboard</td><td>GND Común</td></tr>
</tbody>
</table>

Circuito 
<img width="635" height="847" alt="Captura de pantalla 2026-07-23 133215" src="https://github.com/user-attachments/assets/c8713bb8-a8fa-47a3-b22f-2182bea57f27" />
este es el demo de el circuito :B solo me faltan baterias funcionales

Gracias a todo lector dios te bendiga :B 
