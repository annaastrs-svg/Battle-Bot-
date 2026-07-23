[Conexiones BB.csv](https://github.com/user-attachments/files/30319116/Conexiones.BB.csv)Kafkas Bot 
---
Kafkas Bot es un Battle bot de pelea con una arma tipo hacha controlada por dos servomotores 180.
funciona gracias a un esp32 c3 super mini, controlado por un control LogiTECH y movilidad por dos motores N20,
es alimentado por una bateria de 7.4 V y 6800 mAh, tiene un boton con COM,NC,NO para seguridad y un LED piloto.

CAD
<img width="847" height="663" alt="Captura de pantalla 2026-07-23 124531" src="https://github.com/user-attachments/assets/57bc70e7-fa77-4563-a5a3-564a83ee6e1c" />
<img width="745" height="712" alt="Captura de pantalla 2026-07-23 124538" src="https://github.com/user-attachments/assets/0270ad37-3a21-4fc6-bb3a-d2c20eb3c575" />

KiCAD
<img width="1917" height="1198" alt="Captura de pantalla 2026-07-22 165208" src="https://github.com/user-attachments/assets/58128697-4cad-4024-be44-1301f47d20df" />
<img width="1142" height="1062" alt="Captura de pantalla 2026-07-23 105802" src="https://github.com/user-attachments/assets/1d6936cc-b9d0-4656-ab38-68ef90ad6475" />
<img width="1177" height="966" alt="Captura de pantalla 2026-07-23 105936" src="https://github.com/user-attachments/assets/69882bae-b026-490f-b4c5-a84f4158ef7f" />

BOM
componente ,explicacion ,cuantos ,costo,link 
motores n20,motores principales,2, $13.00 ,Kit 2 Piezas De Motorreductor Motor 30:1 298: 150:1 50:1 N20 | Envío gratis
servo motores 180 ,motores de arma,2, $5.69 ,Tecneu 2 Servomotor Micro Sg90 1.6kg Servo Motor Arduino Pic 180° | Envío gratis
buck converter,convertidor de energia,1, $11.50 ,10 Pzas Regulador De Voltaje Dc-dc Lm2596 Ajustable 1.25-30v | Envío gratis
boton nc,boton normalmente cerrado,1, $3.96 ,Microswitch Para Horno De Microondas 16a 125v N Abierto | Meses sin interés
led piloto ,metodo de seguridad,1, $4.14 ,Lampara Indicadora Luz Led Piloto Empotrable 22mm 110v | Meses sin interés
driver puente h ,controla los motores,1, $9.25 ,10 Piezas Puente H Mx1508 Mini L298n Doble Pwm Driver Motor | Envío gratis
esp32 c3 super mini,cerebro de el circuito,1, $5.63 ,Esp32-c3 Esp32 Supermini Wifi Bluetooth | Envío gratis
bateria 7.4V 8 A,alimentacion principal,2, $39.76 ,"Batería Para Cohes, Helicópte Rc Wltoys, Lipo 18650 2s 7.4 V | Meses sin interés"
kit de cables dupont,cables,1, $5.30 ,120 Cables Dupont Extra Largos 30cm Macho- Macho: Plug/plug | Envío gratis
,,,,
,,,,
,,,,
[BOM BATTLE BOT .csv](https://github.com/user-attachments/files/30319105/BOM.BATTLE.BOT.csv)


Wiring 
[Upcomponente ,pin ,,componente,pin 
esp32 super mini,5,,servo motor 1,S
esp32 super mini,4,,servo motor 2,S
esp32 super mini,3,,PUENTE H ,IN4
esp32 super mini,2,,PUENTE H ,IN3
esp32 super mini,1,,PUENTE H ,IN2
esp32 super mini,0,,PUENTE H ,IN1
esp32 super mini,GND,,PROTOBOARD,GND COMUN
esp32 super mini,5V,,PROTOBOARD, 5V
puente H ,MOTOR B ,,MOTOR B ,S
puente H ,MOTOR A,,MOTOR A,S
puente H ,GND,,PROTOBOARD,GND COMUN
puente H ,5V,,PROTOBOARD,DIRECTA
servo motor 1,GND,,PROTOBOARD,GND COMUN
servo motor 1,5V,,PROTOBOARD, 5V
servo motor 2,GND,,PROTOBOARD,GND COMUN
servo motor 2,5V,,PROTOBOARD, 5V
buck converter ,IN+,,PROTOBOARD,DIRECTA
buck converter ,IN-,,PROTOBOARD,GND COMUN
buck converter ,OUT+,,PROTOBOARD,5V
buck converter ,OUT-,,PROTOBOARD,GND COMUN
boton ,NC,,no conectado,no conectado
boton ,NO ,,PROTOBOARD,DIRECTA
boton ,COM,,bateria,positivo
Led piloto,S,,PROTOBOARD,DIRECTA
Led piloto,Negativo ,,PROTOBOARD,GND COMUN
bateria,Negativo ,,PROTOBOARD,GND COMUN
loading Conexiones BB.csv…]()

CODE
el codigo es c++, corrido en arduino IDE 
<img width="1060" height="1025" alt="image" src="https://github.com/user-attachments/assets/e7324c5c-d809-4c3a-a24d-20b6754dcfed" />
este es el codigo d prueba

<img width="1152" height="433" alt="Captura de pantalla 2026-07-22 132637" src="https://github.com/user-attachments/assets/86463edb-33df-43ce-b8a9-e80600dd88f1" />
esto es lo que muestra la terminal una vez que se corre el codigo, uso esto para ver que hay seguimiento y buen cierre de circuito
