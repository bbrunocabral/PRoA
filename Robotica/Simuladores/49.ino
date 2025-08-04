#include <IRremote.h>

// Pines para el receptor IR y los LEDs
const int irPin = 2;          // Pin del receptor IR
const int rPin = 3;           // Pin LED Rojo
const int gPin = 4;           // Pin LED Verde
const int bPin = 5;           // Pin LED Azul

int state = 0;  // Estado actual: 0 = apagado, 1 = encendido

void setup() {
  Serial.begin(9600);

  // Inicializar pines LED como salida
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);

  // Iniciar el receptor IR
  IrReceiver.begin(irPin, ENABLE_LED_FEEDBACK);
  Serial.println("Receptor IR listo.");
}

void loop() {
  if (IrReceiver.decode()) {
    int command = IrReceiver.decodedIRData.command;

    Serial.print("Comando recibido: ");
    Serial.println(command);

    // Comando 67 es un ejemplo (botón OK en algunos controles remotos)
    if (command == 67) {
      if (state == 0) {
        state = 1;
      } else {
        state = 0;
      }
    }

    // Encender o apagar los LEDs RGB según el estado
    digitalWrite(rPin, state);
    digitalWrite(gPin, state);
    digitalWrite(bPin, state);

    delay(500); // Pausa para evitar lecturas repetidas

    IrReceiver.resume(); // Listo para el próximo dato IR
  }
}
