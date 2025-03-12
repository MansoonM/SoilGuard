# SoilGuard
📌This IOT based project presents the design and implementation of an optimized Soil Testing System using Arduino technology, aimed at monitoring key environmental parameters: soil moisture, temperature, humidity, and air quality. The system employs a soil moisture sensor to assess hydration levels, a DHT11/DHT22 sensor for accurate temperature and humidity readings, and an MQ-135 or MQ-7 sensor to evaluate air quality.

💥Data from these sensors is processed and displayed in real-time on a 16x2 LCD screen, providing users with immediate insights into soil and environmental conditions. The user-friendly interface allows for straightforward monitoring, empowering farmers and gardeners to make informed decisions regarding irrigation and crop management.

🎯This project not only enhances agricultural productivity but also promotes sustainable farming practices by fostering environmental awareness. Future enhancements may include features such as data logging, wireless connectivity for remote monitoring, and integration with mobile applications, further increasing accessibility and user engagement. Overall, the Real-Time Agricultural Monitoring Solution based on Arduino serves as a practical tool for optimizing agricultural practices while contributing to the goal of sustainable development.

<h3>1. Arduino Uno:</h3>
The central microcontroller that processes data from sensors and controls the LCD display.
Power Pins:
5V Pin: Supplies 5V to sensors and LCD.
GND Pin: Common ground for all components.

<h3>2. Soil Moisture Sensor:</h3>
Measures the water content in the soil.
Connections:
VCC: Connect to the 5V pin on the Arduino.
GND: Connect to the GND pin on the Arduino.
A0 (Analog Output): Connect to one of the analog input pins on the Arduino (e.g., A0).

<h3>3. DHT11 Sensor:</h3>
Measures temperature and humidity.
Connections:
VCC: Connect to the 5V pin on the Arduino.
GND: Connect to the GND pin on the Arduino.
Data Pin: Connect to a digital pin on the Arduino (e.g., D2).

<h3>4. MQ135 Sensor:</h3>
Detects harmful gases and measures air quality.
Connections:
VCC: Connect to the 5V pin on the Arduino.
GND: Connect to the GND pin on the Arduino.
A0 (Analog Output): Connect to another analog input pin on the Arduino (e.g., A1).

<h3>5. LCD 16x2 I2C Display:</h3>
Displays real-time data from the sensors.
Connections:
VCC: Connect to the 5V pin on the Arduino.
GND: Connect to the GND pin on the Arduino.
SDA: Connect to the SDA pin on the Arduino (A4 on Uno).
SCL: Connect to the SCL pin on the Arduino (A5 on Uno).

<h3>6. Breadboard and Jumper Wires:
</h3>
Used to create temporary connections between components.
Ensures a clean and organized wiring setup.

<h2>Step-by-Step Wiring</h2>
<h4>Power Connections:</h4>
Connect the 5V pin on the Arduino to the VCC pin of all sensors and the LCD.
Connect the GND pin on the Arduino to the GND pin of all sensors and the LCD.
<h4>Soil Moisture Sensor:</h4>
Connect the A0 pin of the soil moisture sensor to the A0 pin on the Arduino.
<h4>DHT11 Sensor:</h4?
Connect the Data pin of the DHT11 sensor to the D2 pin on the Arduino.
<h4>MQ135 Sensor:</h4>
Connect the A0 pin of the MQ135 sensor to the A1 pin on the Arduino.
<h4>LCD 16x2 I2C Display:</h4>
Connect the SDA pin of the LCD to the A4 pin on the Arduino.
Connect the SCL pin of the LCD to the A5 pin on the Arduino.


