class Cuadrado:
    def __init__(self, lado):
        self.lado = lado

    def imprimir_perimetro(self):
        perimetro = self.lado * 4
        print(f"El perímetro del cuadrado es: {perimetro}")

    def imprimir_superficie(self):
        superficie = self.lado ** 2
        print(f"La superficie del cuadrado es: {superficie}")

# Ejemplo de uso
cuadrado = Cuadrado(5)
cuadrado.imprimir_perimetro()
cuadrado.imprimir_superficie()
