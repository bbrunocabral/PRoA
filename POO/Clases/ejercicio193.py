class Operaciones:
    def __init__(self):
        self.valor1 = int(input("Ingrese el primer número: "))
        self.valor2 = int(input("Ingrese el segundo número: "))

    def suma(self):
        print(f"Suma: {self.valor1 + self.valor2}")

    def resta(self):
        print(f"Resta: {self.valor1 - self.valor2}")

    def multiplicacion(self):
        print(f"Multiplicación: {self.valor1 * self.valor2}")

    def division(self):
        if self.valor2 != 0:
            print(f"División: {self.valor1 / self.valor2}")
        else:
            print("Error: no se puede dividir por cero.")

# Ejemplo de uso:
operacion1 = Operaciones()
operacion1.suma()
operacion1.resta()
operacion1.multiplicacion()
operacion1.division()
