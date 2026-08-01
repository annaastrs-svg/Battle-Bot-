"""
Version guiada: te va diciendo que hacer paso a paso y detecta
automaticamente el eje/boton correcto comparando antes/despues de moverlo.
"""
import pygame

pygame.init()
pygame.joystick.init()

if pygame.joystick.get_count() == 0:
    print("No se detecto ningun control. Conectalo por USB e intenta de nuevo.")
    exit()

joystick = pygame.joystick.Joystick(0)
joystick.init()
print(f"Control detectado: {joystick.get_name()}\n")


def leer_ejes():
    pygame.event.pump()
    return [joystick.get_axis(i) for i in range(joystick.get_numaxes())]


def detectar_eje(paso, total, instruccion):
    print(f"\n[Paso {paso}/{total}] {instruccion}")
    input("     Todavia SIN moverlo, presiona ENTER...")
    reposo = leer_ejes()

    input("     Ahora MUEVELO y mantenlo, luego presiona ENTER...")
    actual = leer_ejes()

    cambios = [abs(actual[i] - reposo[i]) for i in range(len(actual))]
    eje = cambios.index(max(cambios))
    print(f"     -> Eje {eje} detectado (cambio: {max(cambios):.2f})")
    return eje


def detectar_boton(paso, total, instruccion):
    print(f"\n[Paso {paso}/{total}] {instruccion}")
    input("     Presionalo y mantenlo, luego presiona ENTER...")
    pygame.event.pump()
    for i in range(joystick.get_numbuttons()):
        if joystick.get_button(i):
            print(f"     -> Boton {i} detectado")
            return i
    print("     No detecte nada presionado, intentemos otra vez.")
    return detectar_boton(paso, total, instruccion)


print("Te voy a guiar en 3 pasos para encontrar tus numeros.")

eje_y = detectar_eje(1, 3, "Vamos a detectar ARRIBA/ABAJO del stick IZQUIERDO")
eje_x = detectar_eje(2, 3, "Vamos a detectar IZQUIERDA/DERECHA del stick IZQUIERDO")
boton_a = detectar_boton(3, 3, "Vamos a detectar el BOTON VERDE (A)")

print("\n" + "=" * 45)
print("LISTO! Copia estas 3 lineas en control_robot.py:")
print(f"EJE_X = {eje_x}")
print(f"EJE_Y = {eje_y}")
print(f"BOTON_A = {boton_a}")
print("=" * 45)