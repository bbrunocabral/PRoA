# Confeccionar un programa que simule tirar dos dados y luego muestre los valores que salieron. Imprimir un mensaje que ganó si la suma de los mismos es igual a 7.
# Para resolver este problema requerimos un algoritmo para que se genere un valor aleatorio entre 1 y 6. Como la generación de valores aleatorios es un 
# tema muy frecuente la biblioteca estándar de Python incluye un módulo que nos resuelve la generación de valores aleatorios.
import random

dado1=random.randint(1,6)
dado2=random.randint(1,6)
print("Primer dado:",dado1)
print("Segundo dado:",dado2)
suma=dado1+dado2
if suma==7:
    print("Gano")
else:
    print("Perdio")