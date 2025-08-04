class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def mostrar_datos(self):
        print(f"Nombre: {self.nombre}")
        print(f"Edad: {self.edad}")

    def es_mayor_de_edad(self):
        if self.edad >= 18:
            print("Es mayor de edad.")
        else:
            print("No es mayor de edad.")

# Ejemplo de uso:
nombre = input("Ingrese su nombre: ")
edad = int(input("Ingrese su edad: "))

persona1 = Persona(nombre, edad)
persona1.mostrar_datos()
persona1.es_mayor_de_edad()
