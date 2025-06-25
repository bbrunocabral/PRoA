lista=[]
for x in range  (5):
    valor=int(input("ingrese valor"))
    lista.append(valor)
    
    menor=lista[0]
posicion=0
for x in range(1,5):
    if lista[x]<menor:
        menor=lista[x]
        posicion=x
        
print("Lista completa")
print(lista)
print("mayor de lista")
print(mayor)