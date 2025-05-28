int wait = 500; 
float area; 
float Pi = 3.1415; 
int rad = 3; 
String mensaje1 = "El area de un circulo con radio "; 
String mensaje2 = " es de: "; 

void setup() { 
  Serial.begin(9600); 
} 

void loop() { 
  area = Pi * rad * rad;
  Serial.print(mensaje1);
  Serial.print(rad);
  Serial.print(mensaje2);
  Serial.println(area); 
  delay(wait); 
}
