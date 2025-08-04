class Cuadrado:
    def __init__(self, lado):
        self.lado = lado

    def calcular_perimetro(self):
        perimetro = self.lado * 4
        print(f"Perímetro: {perimetro}")

    def calcular_superficie(self):
        superficie = self.lado ** 2
        print(f"Superficie: {superficie}")

# Ejemplo de uso:
lado = float(input("Ingrese el valor del lado del cuadrado: "))
cuadrado1 = Cuadrado(lado)
cuadrado1.calcular_perimetro()
cuadrado1.calcular_superficie()
