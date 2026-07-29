Laminax Bot 
---
Esta es la versión simplificada de el proyecto, sin pygame y dolores de fakin cabeza con VS CODE y el control que es tan difícil de hacer funcionar correctamente. . . 
Laminax es un Battle bot de pelea con una arma tipo hacha controlada por un servo motor MG996R
funciona gracias a un esp32 c3 y movilidad por dos motores N20,
es alimentado por 3 baterías(dos 3.7V 500 mAh en paralelo) & (una 3.7V 2000 mAh)

<img width="1584" height="672" alt="Gemini_Generated_Image_a7q2tca7q2tca7q2" src="https://github.com/user-attachments/assets/56ee4e57-7242-4712-bde6-dff7c690ff58" />
<img width="1584" height="672" alt="Gemini_Generated_Image_ytokjlytokjlytok" src="https://github.com/user-attachments/assets/8067adf1-ba9f-4a82-836b-ac7b72f9e4f1" />

como funciona?
como es controlado con el cel, , te conectas desde la compu a la wifi de la esp32 y mueves el robot con los mandos en pantalla y lo mas difícil, el arma se mueve con "Atacar" mientras la presionas ataca y cuando sueltas el boton regresa a su posición de reposo 


CAD
---
en el cad estan los dos motores dc, llantas y dos servomotores para dar una idea de el acomodo
<img width="920" height="732" alt="Captura de pantalla 2026-07-26 191900" src="https://github.com/user-attachments/assets/4063b389-bc0a-4107-ac08-8d1bd1ae6b5e" />

KiCAD
---
3D VIEW
<img width="1238" height="907" alt="Captura de pantalla 2026-07-23 202517" src="https://github.com/user-attachments/assets/27eba5a1-45af-4818-b4e3-bb360d084edd" />

Esquematico
<img width="1277" height="837" alt="image" src="https://github.com/user-attachments/assets/330eff11-2c99-4883-bf4b-7820532edf11" />


CODE
---
visual estudio code 
tenemos 3 códigos 
2 python  que son para el probar el control y otro para controlar el robot 

[codigo de probar control](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/Probar%20control.py)

[codigo de control robot](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/Control%20robot.py)

y 1 c++ en arduino IDE, este código es el que crea la red wifi, nos da info desde la terminal, ponemos seguridad por si perdemos conecion yyy define los motores los servos y así :B 

[Codigo Arduino IDE](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/laminax_bot.ino)


# Lista de Materiales (BOM) — Laminax Bot

| Componente | Para qué | Cantidad | Precio | Producto |
|---|---|---|---|---|
| Motores N20 | Motores principales (llantas) | 2 | $13.00 | [Kit 2 Piezas De Motorreductor Motor 30:1 298: 150:1 50:1 N20 ](https://www.mercadolibre.com.mx/n20-micro-motor-dc-con-reduccion-6v-200-rpm/up/MLMU721988694?pdp_filters=item_id%3AMLM3286891636&from=gshop&matt_tool=15920969&matt_word=&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_creative=&matt_keyword=&matt_ad_position=&matt_ad_type=&matt_merchant_id=50038545&matt_product_id=MLMU721988694&matt_product_partition_id=4577198197450204&matt_target_id=pla-4577198197450204&msclkid=cf92e911e1ec13565a9f83775c3f8272&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450204&utm_content=CE)|
| MG996R | Servo motor del arma | 1 | $129.99  |https://www.mercadolibre.com.mx/servomotor-mg996r--mg995-servo-motor/up/MLMU698938548?pdp_filters=item_id%3AMLM5005746376&from=gshop&matt_tool=15920969&matt_word=&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_creative=&matt_keyword=&matt_ad_position=&matt_ad_type=&matt_merchant_id=50038545&matt_product_id=MLMU698938548&matt_product_partition_id=4577198197450206&matt_target_id=pla-4577198197450206&msclkid=b9da9ea54f45191d3b03f4c3f2cf8dbb&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450206&utm_content=CE |
| ESP32 | Cerebro del circuito | 1 | $5.63 | https://www.mercadolibre.com.mx/esp32-c3-esp32-supermini-wifi-bluetooth/p/MLM46912341?pdp_filters=item_id%3AMLM2779591141&from=gshop&matt_tool=15920969&matt_word=&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_creative=&matt_keyword=&matt_ad_position=&matt_ad_type=&matt_merchant_id=50038545&matt_product_id=MLM46912341-product&matt_product_partition_id=4577198197450204&matt_target_id=pla-4577198197450204&msclkid=bb5ca1be34e817af15f1cbd88904733f&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450204&utm_content=CE |
| Batería 3.7V 2000mAh | Alimentación ESP32/Servo | 1 | $39.76  | |
| Kit cables dupont | Cables | 1 | $5.30 | https://www.mercadolibre.com.mx/cables-jumper-dupont-m-m-20cm-40-arduino-protoboard/p/MLM46898481?pdp_filters=item_id%3AMLM3587883832&from=gshop&matt_tool=15920969&matt_word=&matt_source=microsoft&matt_campaign_id=571305430&matt_ad_group_id=1177579225794197&matt_match_type=e&matt_network=o&matt_device=c&matt_creative=&matt_keyword=&matt_ad_position=&matt_ad_type=&matt_merchant_id=50038545&matt_product_id=MLM46898481-product&matt_product_partition_id=4577198197450205&matt_target_id=pla-4577198197450205&msclkid=0b59b00f2e4e12d6929bda69904acc84&utm_source=bing&utm_medium=cpc&utm_campaign=MLM_ML_BING_AO_CE-ALL-ALL_X_PLA_ALLB_TXS_ALL&utm_term=4577198197450205&utm_content=CE |
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

Control
---

<img width="1917" height="943" alt="Captura de pantalla 2026-07-27 193015" src="https://github.com/user-attachments/assets/0891146f-8630-42f4-b524-707550c4d5bd" />

la diferencia es q esta weonada esta mas simple por q no ocupamos VS code ni el joystivk por q me duele la cabeza de batallar con el fliping control 
