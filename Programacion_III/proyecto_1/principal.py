#El segundo archivo y desde donde realmente arrancará nuestro programa es el módulo principal.py
import operacioneslista

lista=operacioneslista.cargar()
operacioneslista.imprimir_mayor(lista)
operacioneslista.imprimir_suma(lista)