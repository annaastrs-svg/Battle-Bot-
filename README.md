Laminax Bot 
---
Laminax is a battle bot with an axe-type weapon powered by an MG996R servo motor. 
It works thanks to an ESP32, controlled by a LogiTECH controller, and moves with two N20 motors. 
It's powered by 3 batteries (two 3.7V 500 mAh in parallel) & (one 3.7V 2000 mAh).

<img width="1584" height="672" alt="Gemini_Generated_Image_ytokjlytokjlytok" src="https://github.com/user-attachments/assets/d9275b8a-b8f4-430a-a0e9-3e47e4c705d6" />
<img width="1584" height="672" alt="Gemini_Generated_Image_a7q2tca7q2tca7q2" src="https://github.com/user-attachments/assets/f9168230-4add-477d-a381-f17120c6e088" />
gemini made photos l o l , non modificated 


BTW look at my [JOURNAL.MD !](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/journal.md)

[andd the youtube video of the project...](https://youtu.be/gHDkoSpJhSc?si=piYCwfSNSOPA8Sjc)may not be the best video its super homemade  ignore that...

How does it work?
How it’s controlled with a Logitech: you connect from the computer to the ESP32-C3's Wi-Fi and move the robot with the two joysticks. 
The trickiest part is the weapon—it moves with “A”; while you hold it, it attacks, and when you release the key, it goes back to its resting position.

CAD
---
Design - in the CAD there are the two DC motors, wheels, and two servomotors to give an idea of the layout

<img width="920" height="732" alt="Captura de pantalla 2026-07-26 191900" src="https://github.com/user-attachments/assets/4063b389-bc0a-4107-ac08-8d1bd1ae6b5e" />


KiCAD
---
3D VIEW
<img width="1238" height="907" alt="Captura de pantalla 2026-07-23 202517" src="https://github.com/user-attachments/assets/27eba5a1-45af-4818-b4e3-bb360d084edd" />

Eschematic
<img width="1277" height="837" alt="image" src="https://github.com/user-attachments/assets/330eff11-2c99-4883-bf4b-7820532edf11" />

CODE
---
Visual Studio Code
we have 3 codes
2 Python ones that are for testing the control and another for controlling the robot

[control test code](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/Probar%20control.py)


[test control robot](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/Control%20robot.py)

[Arduino IDE Code](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/laminax_bot.ino)

# Bill of Materials (BOM)

| Component | Purpose | Qty | Price | Product |
|---|---|---|---|---|
| N20 Motors | Main motors (wheels) | 2 | $0.75 (kit of 2) | [2-Pack N20 Gear Motor Kit (30:1 / 298:1 / 150:1 / 50:1)](https://www.mercadolibre.com.mx/n20-micro-motor-dc-con-reduccion-6v-200-rpm/up/MLMU721988694?pdp_filters=item_id%3AMLM3286891636&from=gshop&matt_tool=15920969&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_merchant_id=50038545&matt_product_id=MLMU721988694&matt_product_partition_id=4577198197450204&matt_target_id=pla-4577198197450204&msclkid=cf92e911e1ec13565a9f83775c3f8272&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450204&utm_content=CE) |
| MG996R | Weapon servo motor | 1 | $7.50 | [MG996R Servo Motor](https://www.mercadolibre.com.mx/servomotor-mg996r--mg995-servo-motor/up/MLMU698938548?pdp_filters=item_id%3AMLM5005746376&from=gshop&matt_tool=15920969&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_merchant_id=50038545&matt_product_id=MLMU698938548&matt_product_partition_id=4577198197450206&matt_target_id=pla-4577198197450206&msclkid=b9da9ea54f45191d3b03f4c3f2cf8dbb&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450206&utm_content=CE) |
| ESP32-C3 SuperMini | Main controller (brain) | 1 | $0.32 | [ESP32-C3 SuperMini (WiFi + Bluetooth)](https://www.mercadolibre.com.mx/esp32-c3-esp32-supermini-wifi-bluetooth/p/MLM46912341?pdp_filters=item_id%3AMLM2779591141&from=gshop&matt_tool=15920969&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_merchant_id=50038545&matt_product_id=MLM46912341-product&matt_product_partition_id=4577198197450204&matt_target_id=pla-4577198197450204&msclkid=bb5ca1be34e817af15f1cbd88904733f&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450204&utm_content=CE) |
| 3.7V 2000mAh Battery | Power for ESP32/Servo | 1 | $2.29 | |
| Dupont Jumper Wire Kit | Wiring | 1 | $0.31 | [Dupont Jumper Wires, M-M, 20cm (40-pack)](https://www.mercadolibre.com.mx/cables-jumper-dupont-m-m-20cm-40-arduino-protoboard/p/MLM46898481?pdp_filters=item_id%3AMLM3587883832&from=gshop&matt_tool=15920969&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_merchant_id=50038545&matt_product_id=MLM46898481-product&matt_product_partition_id=4577198197450205&matt_target_id=pla-4577198197450205&msclkid=0b59b00f2e4e12d6929bda69904acc84&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450205&utm_content=CE) |
| 3.7V 500mAh Battery | Power for motors | 2 | ~$3.00 ea. | [3.7V 500mAh LiPo Battery (1S, 25C)](https://www.mercadolibre.com.mx/bateria-lipo-litio-37v-500mah-recargable-1s-25c-pila-litio/p/MLM2039836242) |
| DRV8833 | H-bridge (motor driver) | 1 | $55.00 | [DRV8833 Motor Driver Module](https://www.electronicsavalanche.com.mx/shop/driv001-modulo-drv8833-driver-para-motores-890) |

**Estimated Total: ~$20.35 USD**

# Conecction table

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
| Baterías serie | negativo | → | Protoboard | GND COMÚN |
| Batería serie | positivo | → | Protoboard | 5V |

Notes
---
Justification of the hours:
The project had 2 total changes, in the CAD, in the code, and materials. This made the project take longer.

This project was made for [MACONDO](https://macondo.hackclub.com/dashboard)

