#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

// Configuración del LCD (dirección I2C y tamaño 16x2)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Configuración del sensor DHT
#define DHTPIN 2        // Pin de datos del DHT conectado al pin digital 2
#define DHTTYPE DHT11   // Cambiar a DHT22 si usás ese sensor

DHT HT(DHTPIN, DHTTYPE);

unsigned long dTime = 2000; // Tiempo de espera entre lecturas (en milisegundos)

void setup() {
  Serial.begin(9600);
  HT.begin();
  lcd.begin();
  lcd.backlight();
}

void loop() {
  float humidity = HT.readHumidity();
  float tempC = HT.readTemperature();         // Celsius
  float tempF = HT.readTemperature(true);     // Fahrenheit

  // Validación por si el sensor falla
  if (isnan(humidity) || isnan(tempC) || isnan(tempF)) {
    Serial.println("Error al leer del sensor DHT");
    lcd.setCursor(0, 0);
    lcd.print("Error sensor DHT");
    delay(dTime);
    lcd.clear();
    return;
  }

  Serial.print("Humedad Relativa: ");
  Serial.print(humidity);
  Serial.print("% / Temperatura: ");
  Serial.print(tempC);
  Serial.print("°C / ");
  Serial.print(tempF);
  Serial.println("F");

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
