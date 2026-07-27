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

[codigo de control robot]([ruta_del_archivo](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/Control%20robot.py)

y 1 c++ en arduino IDE, este codigo es el que crea la red wifi, nos da info desde la terminal, ponemos seguridad por si perdemos conecion yyy define los motores los servos y asi :B 
[Codigo Arduino IDE]([ruta_del_archivo](https://github.com/annaastrs-svg/Battle-Bot-/blob/actualizacion/laminax_bot.ino))
