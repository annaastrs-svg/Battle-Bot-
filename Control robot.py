"""
Antes de correr esto: conecta tu compu a la red WiFi "LaminaxBot" (la crea el robot).
Ajusta EJE_X, EJE_Y y BOTON_A abajo segun lo que viste en probar_control.py
"""
import pygame
import socket
import time

ESP32_IP = "192.168.4.1"
ESP32_PORT = 4210

# --- Ajusta estos 3 numeros segun probar_control.py ---
EJE_X = 0
EJE_Y = 1
BOTON_A = 0

pygame.init()
pygame.joystick.init()
joystick = pygame.joystick.Joystick(0)
joystick.init()

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

print(f"Control: {joystick.get_name()}")
print("Mandando comandos al robot. Ctrl+C para parar.")

try:
    while True:
        pygame.event.pump()

        x = joystick.get_axis(EJE_X)
        y = -joystick.get_axis(EJE_Y)  # invertido: arriba en el stick = adelante
        a = joystick.get_button(BOTON_A)

        x_pwm = int(x * 255)
        y_pwm = int(y * 255)

        mensaje = f"{x_pwm},{y_pwm},{a}"
        sock.sendto(mensaje.encode(), (ESP32_IP, ESP32_PORT))

        time.sleep(0.05)  # 20 comandos por segundo

except KeyboardInterrupt:
    sock.sendto(b"0,0,0", (ESP32_IP, ESP32_PORT))  # frena el robot al salir
    print("\nDetenido.")