#include <Wire.h>               // Library for I2C communication
#include <LiquidCrystal_I2C.h>  // Library for LCD 16x2 I2C
#include <DHT.h>                // Library for DHT11 sensor

// Define pins
#define SOIL_MOISTURE_PIN A0    // Soil moisture sensor connected to A0
#define DHT_PIN 2               // DHT11 sensor connected to D2
#define MQ135_PIN A1            // MQ135 sensor connected to A1

// Initialize LCD (I2C address: 0x27, 16 columns, 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Initialize DHT sensor
#define DHT_TYPE DHT11
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize LCD
  lcd.begin();
  lcd.backlight();  // Turn on the backlight

  // Initialize DHT sensor
  dht.begin();

  // Print welcome message
  lcd.setCursor(0, 0);
  lcd.print("SoilGraud System");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");
  delay(2000);  // Wait for 2 seconds
  lcd.clear();  // Clear the display
}

void loop() {
  // Read soil moisture
  int soilMoisture = analogRead(SOIL_MOISTURE_PIN);
  soilMoisture = map(soilMoisture, 0, 1023, 0, 100);  // Convert to percentage

  // Read temperature and humidity
  float temperature = dht.readTemperature();  // Read temperature in °C
  float humidity = dht.readHumidity();        // Read humidity in %

  // Read air quality (MQ135)
  int airQuality = analogRead(MQ135_PIN);
  airQuality = map(airQuality, 0, 1023, 0, 500);  // Map to air quality index

  // Display soil moisture with descriptive message
  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture:");
  lcd.setCursor(0, 1);
  if (soilMoisture < 30) {
    lcd.print("Dry");
  } else if (soilMoisture >= 30 && soilMoisture <= 60) {
    lcd.print("Optimal");
  } else {
    lcd.print("Wet");
  }
  delay(1000);  // Display for 1 second
  lcd.clear();  // Clear the display

  // Display temperature and humidity
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(humidity);
  lcd.print("%");
  delay(1000);  // Display for 1 second
  lcd.clear();  // Clear the display

  // Display air quality with descriptive message
  lcd.setCursor(0, 0);
  lcd.print("Air Quality:");
  lcd.setCursor(0, 1);
  if (airQuality <= 50) {
    lcd.print("Good");
  } else if (airQuality > 50 && airQuality <= 100) {
    lcd.print("Moderate");
  } else if (airQuality > 100 && airQuality <= 200) {
    lcd.print("Unhealthy");
  } else {
    lcd.print("Hazardous");
  }
  delay(1000);  // Display for 1 second
  lcd.clear();  // Clear the display
}