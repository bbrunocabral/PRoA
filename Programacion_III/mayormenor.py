def mayor(x1,x2):
    if x1>x2:
        return x1
    else:
        return x2


def menor(x1,x2):
    if x1<x2:
        return x1
    else:
        return x2
    
    from mayormenor import mayor

valor1=int(input("Ingrese primer valor:"))
valor2=int(input("Ingrese segundo valor:"))
print("El mayor de los dos valores es",mayor(valor1,valor2)) 