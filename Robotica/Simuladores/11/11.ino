int i = 0; 
int wait = 500; 
void setup() { 
// put your setup code here, to run once: 
Serial.begin(9600); 
} 
void loop() { 
// put your main code here, to run repeatedly: 
Serial.println("i =i+1"); 
Serial.println(i); 
delay(wait); 
i=i+1; 
}
