int led = 13;

void setup() {
pinMode(led, OUTPUT); //Se configura el pin 13 como salida }
}
void loop() {
digitalWrite(led, HIGH);// Se enciende el led
delay(1000); // espera u
digitalWrite(led, LOW);// Se apaga el led
delay(1000); //e espera unos segundos
}
