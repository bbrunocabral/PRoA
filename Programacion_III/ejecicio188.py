class Persona:
    def __init__(self):
        self.nombre = ""
        self.edad = 0

    def cargar_datos(self):
        self.nombre = input("Ingrese el nombre: ")
        self.edad = int(input("Ingrese la edad: "))

    def mostrar_datos(self):
        print(f"Nombre: {self.nombre}")
        print(f"Edad: {self.edad}")

    def es_mayor_de_edad(self):
        if self.edad >= 18:
            print("Es mayor de edad.")
        else:
            print("No es mayor de edad.")

# Ejemplo de uso
persona = Persona()
persona.cargar_datos()
persona.mostrar_datos()
persona.es_mayor_de_edad()