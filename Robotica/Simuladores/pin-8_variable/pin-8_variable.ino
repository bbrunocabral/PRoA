int dot = 100; 
int dash = 300; 
void setup() { 
// put your setup code here, to run once: 
pinMode (8, OUTPUT); 
} 
void loop() { 
// put your main code here, to run repeatedly: 
digitalWrite(8, HIGH); 
delay(dot); 
digitalWrite(8, LOW); 
delay(dot); 
digitalWrite(8,HIGH); 
delay(dot); 
digitalWrite(8, LOW); 
delay(dot);
digitalWrite(8, HIGH); 
delay(dash); 
digitalWrite(8, LOW); 
delay(dash); 
digitalWrite(8,HIGH); 
delay(dash); 
digitalWrite(8, LOW); 
delay(dash);
