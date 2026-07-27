Laminax Bot 
---
Laminax es un Battle bot de pelea con una arma tipo hacha controlada por un servo motor MG996R
funciona gracias a un esp32 c3 super mini, controlado por un control LogiTECH y movilidad por dos motores N20,
es alimentado por 3 baterias(dos 3.7V 500 mah en paralelo) & (una 3.7V 2000 mAh)

FOTO terminado xq aun no acabo jaja ejej xd xd xd  ayuda 

como funciona?
como es controlado con un logitech, te conectas desde la compu a la wifi de la esp32 c3 y mueves el robot con los dos joysticks y lo mas dificil, el arma se mueve con "A" mientras la presionas ataca y cuando sueltas la tecla regresa a su posicion de reposo 


CAD
---
en el cad estan los dos motores dc, llantas y dos servomotores para dar una idea de el acomodo
<img width="920" height="732" alt="Captura de pantalla 2026-07-26 191900" src="https://github.com/user-attachments/assets/4063b389-bc0a-4107-ac08-8d1bd1ae6b5e" />
<img width="927" height="702" alt="Captura de pantalla 2026-07-26 191851" src="https://github.com/user-attachments/assets/9abc16c8-c720-496d-9dd6-70a8e6c14796" />

KiCAD
---
3D VIEW
<img width="1917" height="1198" alt="Captura de pantalla 2026-07-22 165208" src="https://github.com/user-attachments/assets/58128697-4cad-4024-be44-1301f47d20df" />

PCB
<img width="1238" height="907" alt="Captura de pantalla 2026-07-23 202517" src="https://github.com/user-attachments/assets/ed66e1ca-ff29-4b39-bc5e-c514639d650a" />

ESCHEMATIC
<img width="1177" height="966" alt="Captura de pantalla 2026-07-23 105936" src="https://github.com/user-attachments/assets/69882bae-b026-490f-b4c5-a84f4158ef7f" />

CODE
---
visual studio code 
tenemos 3 codigos 
2 python  que son para el probar el control y otro para controlar el robot 

[codigo de probar control](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/Probar%20control.py)

[codigo de control robot](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/Control%20robot.py)

y 1 c++ en arduino IDE, este codigo es el que crea la red wifi, nos da info desde la terminal, ponemos seguridad por si perdemos conecion yyy define los motores los servos y asi :B 

[Codigo Arduino IDE]([ruta_del_archivo](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/laminax_bot.ino)


# Lista de Materiales (BOM) — Laminax Bot

| Componente | Para qué | Cantidad | Precio | Producto |
|---|---|---|---|---|
| Motores N20 | Motores principales (llantas) | 2 | $13.00 | Kit 2 Piezas De Motorreductor Motor 30:1 298: 150:1 50:1 N20 |
| MG996R | Servo motor del arma | 1 | $129.99  |https://www.mercadolibre.com.mx/servomotor-mg996r--mg995-servo-motor/up/MLMU698938548?pdp_filters=item_id%3AMLM5005746376&from=gshop&matt_tool=15920969&matt_word=&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_creative=&matt_keyword=&matt_ad_position=&matt_ad_type=&matt_merchant_id=50038545&matt_product_id=MLMU698938548&matt_product_partition_id=4577198197450206&matt_target_id=pla-4577198197450206&msclkid=b9da9ea54f45191d3b03f4c3f2cf8dbb&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450206&utm_content=CE |
| ESP32-C3 SuperMini | Cerebro del circuito | 1 | $5.63 | Esp32-c3 Esp32 Supermini Wifi Bluetooth |
| Batería 3.7V 2000mAh | Alimentación ESP32/Servo | 1 | $39.76  | |
| Kit cables dupont | Cables | 1 | $5.30 | 120 Cables Dupont Extra Largos 30cm Macho-Macho |
| Batería 3.7V 500mAh | Alimentación de motores | 2 | ~$52.00 c/u | [Batería LiPo 3.7V 500mAh recargable 1S 25C](https://www.mercadolibre.com.mx/bateria-lipo-litio-37v-500mah-recargable-1s-25c-pila-litio/p/MLM2039836242) |
| DRV8833 | Puente H | 1 | $55.00 | [Módulo DRV8833 Driver Para Motores](https://www.electronicsavalanche.com.mx/shop/driv001-modulo-drv8833-driver-para-motores-890) |

**Total estimado: ~$352.68 MXN**

5. # Tabla de Conexiones — Laminax Bot

| Componente | Pin | → | Componente | Pin |
|---|---|---|---|---|
| ESP32 | 5 | → | Servo | S |
| ESP32 | 0 | → | DRV8833 | IN1 |
| ESP32 | 1 | → | DRV8833 | IN2 |
| ESP32 | 2 | → | DRV8833 | IN3 |
| ESP32 | 3 | → | DRV8833 | IN4 |
| ESP32 | GND | → | Protoboard | GND COMÚN |
| ESP32 | 5V | → | Protoboard | 5V |
| DRV8833 | GND | → | Protoboard | GND COMÚN |
| DRV8833 | SLEEP | → | Protoboard | 5V |
| DRV8833 | 5V (VM) | → | Protoboard | DIRECTA  |
| DRV8833 | OUT1 | → | Motor A | terminal |
| DRV8833 | OUT2 | → | Motor A | terminal |
| DRV8833 | OUT3 | → | Motor B | terminal |
| DRV8833 | OUT4 | → | Motor B | terminal |
| Servo | 5V | → | Protoboard | 5V |
| Servo | GND | → | Protoboard | GND COMÚN |
| Baterías (paralelo) | negativo | → | Protoboard | GND COMÚN |
| Baterías (paralelo) | positivo | → | Protoboard | DIRECTA  |
| Batería 2000mAh | negativo | → | Protoboard | GND COMÚN |
| Batería 2000mAh | positivo | → | Protoboard | 5V |
