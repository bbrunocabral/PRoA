int vRead = A0;
int dt = 100;
float analogVal;
float vout;

void setup() { 
  pinMode(vRead, INPUT); 
  Serial.begin(9600); 
} 

void loop() { 
  analogVal = analogRead(vRead); 
  vout = (5.0 * analogVal) / 1023.0; 
  Serial.print("El voltaje actual es: "); 
  Serial.print(vout); 
  Serial.println(" Voltios"); 
  delay(dt); 
}
