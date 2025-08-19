class Socio:
    def __init__(self):
        # Pedimos el nombre y la antigüedad por teclado
        self.nombre = input("Ingrese el nombre del socio: ")
        self.antiguedad = int(input("Ingrese la antigüedad del socio en años: "))

class Club:
    def __init__(self):
        # Creamos tres objetos de la clase Socio
        print("Ingrese los datos de tres socios:")
        self.socios = []
        for i in range(3):
            print(f"Socio {i + 1}:")
            socio = Socio()
            self.socios.append(socio)

    def socio_con_mayor_antiguedad(self):
        # Inicializamos la variable para el socio con mayor antigüedad
        socio_mayor_antiguedad = self.socios[0]
        
        # Comparamos todos los socios
        for socio in self.socios[1:]:
            if socio.antiguedad > socio_mayor_antiguedad.antiguedad:
                socio_mayor_antiguedad = socio
        
        # Imprimimos el nombre del socio con mayor antigüedad
        print(f"El socio con mayor antigüedad es: {socio_mayor_antiguedad.nombre} con {socio_mayor_antiguedad.antiguedad} años.")

# Crear un club y encontrar el socio con mayor antigüedad
club = Club()
club.socio_con_mayor_antiguedad()
