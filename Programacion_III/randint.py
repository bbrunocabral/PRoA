#Confeccionar un progarma que simiule tirar dos dados luego muestra los valores 
#Imprimir un mensaje que gano si la suma de los mismos es igual a 7
#Para resolver este problema requerimos de un algoritmo para que se genere un valor 
#Como la generacion de calores aleatorios es un tema muy frecuiente la blibliteca




import random 

dado1=random.randint(1,6)
dado2=random.randint(1,6)
print("primer dado:", dado1)
print("segundo dado:", dado2)
suma=dado1+dado2
if suma==7:
    print("gano")
else :
    print("perdio")