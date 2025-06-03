class Triangulo:
    def __init__(self):
        self.lado1 = 0
        self.lado2 = 0
        self.lado3 = 0

    def cargar_lados(self):
        self.lado1 = float(input("Ingrese el primer lado: "))
        self.lado2 = float(input("Ingrese el segundo lado: "))
        self.lado3 = float(input("Ingrese el tercer lado: "))

    def mostrar_lado_mayor(self):
        mayor = max(self.lado1, self.lado2, self.lado3)
        print(f"El lado mayor es: {mayor}")

    def es_equilatero(self):
        if self.lado1 == self.lado2 == self.lado3:
            print("El triángulo es equilátero.")
        else:
            print("El triángulo no es equilátero.")

# Ejemplo de uso
triangulo = Triangulo()
triangulo.cargar_lados()
triangulo.mostrar_lado_mayor()
triangulo.es_equilatero()