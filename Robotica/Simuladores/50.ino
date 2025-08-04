#include <IRremote.h>

const int irPin = 2;      // Pin donde está conectado el receptor IR
const int rPin = 3;       // LED rojo
const int gPin = 4;       // LED verde
const int bPin = 5;       // LED azul

int state = 0;            // Estado inicial apagado (0)

void setup() {
  Serial.begin(9600);

  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);

  IrReceiver.begin(irPin, ENABLE_LED_FEEDBACK); // Inicia el receptor
  Serial.println("Receptor IR listo");
}

void loop() {
  // Verifica si se ha recibido una señal IR
  if (IrReceiver.decode()) {
    int command = IrReceiver.decodedIRData.command;

    Serial.print("Comando recibido: ");
    Serial.println(command);

    // Si el comando recibido es 67 (por ejemplo, el botón OK)
    if (command == 67) {
      if (state == 0) {
        state = 1;
      } else {
        state = 0;
      }
    }

    // Aplica el estado a los LEDs
    digitalWrite(rPin, state);
    digitalWrite(gPin, state);
    digitalWrite(bPin, state);

    delay(500);              // Espera para evitar múltiples lecturas
    IrReceiver.resume();     // Prepara para recibir el siguiente comando
  }
}
