int i = 0; 
int wait = 500; 
int x = 10; 
int y = 8; 
String operador = "+";  // Se corrigió el operador y cerré la cadena correctamente
String igual = "=";     // Asigné un valor para el símbolo de igual

void setup() { 
  // put your setup code here, to run once: 
  Serial.begin(9600); 
} 

void loop() { 
  // put your main code here, to run repeatedly: 
  int z = x + y;  // Realizamos la operación de suma
  Serial.print(x);        // Imprimimos el primer número
  Serial.print(operador); // Imprimimos el operador
  Serial.print(y);        // Imprimimos el segundo número
  Serial.print(igual);    // Imprimimos el signo de igual
  Serial.println(z);      // Imprimimos el resultado de la suma
  delay(wait);            // Pausa antes de repetir el ciclo
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
