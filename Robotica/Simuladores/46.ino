#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Definiciones
#define DHTPIN 2         // Pin de datos del sensor DHT
#define DHTTYPE DHT11    // Puede ser DHT11 o DHT22

// Objetos
DHT HT(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Dirección I2C del LCD, puede ser 0x27 o 0x3F

unsigned long dTime = 2000; // Tiempo de espera entre lecturas (2 segundos)

void setup() {
  Serial.begin(9600);
  HT.begin();        // Inicia el sensor DHT
  lcd.begin();       // Inicia el LCD
  lcd.backlight();   // Enciende la luz de fondo del LCD

  Serial.println("Iniciando lectura de temperatura y humedad...");
}

void loop() {
  float humidity = HT.readHumidity();
  float tempC = HT.readTemperature();       // Temperatura en Celsius
  float tempF = HT.readTemperature(true);   // Temperatura en Fahrenheit

  // Verificación de errores
  if (isnan(humidity) || isnan(tempC) || isnan(tempF)) {
    Serial.println("Error al leer el sensor DHT");
    lcd.setCursor(0, 0);
    lcd.print(" Error de sensor ");
    lcd.setCursor(0, 1);
    lcd.print("Reintentar...    ");
    delay(dTime);
    lcd.clear();
    return;
  }

  // Mostrar por Serial
  Serial.print("Humedad Relativa: ");
  Serial.print(humidity);
  Serial.print("% / Temperatura: ");
  Serial.print(tempC);
  Serial.print("°C / ");
  Serial.print(tempF);
  Serial.println("F");

  // Mostrar en LCD
  lcd.setCursor(0, 0);
  lcd.print("Humedad: ");
  lcd.print(humidity);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Temp.: ");
  lcd.print(tempC);
  lcd.print("C");

  delay(dTime);
  lcd.clear();
}
