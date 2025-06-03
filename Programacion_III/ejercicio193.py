class Operaciones:
    def __init__(self):
        self.valor1 = int(input("Ingrese el primer valor entero: "))
        self.valor2 = int(input("Ingrese el segundo valor entero: "))

    def sumar(self):
        suma = self.valor1 + self.valor2
        print(f"Suma: {suma}")

    def restar(self):
        resta = self.valor1 - self.valor2
        print(f"Resta: {resta}")

    def multiplicar(self):
        producto = self.valor1 * self.valor2
        print(f"Multiplicación: {producto}")

    def dividir(self):
        if self.valor2 != 0:
            division = self.valor1 / self.valor2
            print(f"División: {division}")
        else:
            print("Error: división por cero.")

# Ejemplo de uso
operacion = Operaciones()
operacion.sumar()
operacion.restar()
operacion.multiplicar()
operacion.dividir()