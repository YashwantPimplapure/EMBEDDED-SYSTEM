Name: YASHWANT SUNIL PIMPLAPURE
Company: CODTECH IT SOLUTIONS
ID: CT6WDKG
Domain: Embedded System
Duration: December 2024 to January 2025
Mentor: Codtech Mentor


Temperature Monitoring System with LCD or Serial Monitor Display
A Temperature Monitoring System is designed to read the ambient temperature using a temperature sensor and display the data in real-time. The system can display the temperature either on an LCD screen or on a Serial Monitor. This type of system is often used in applications like home automation, climate monitoring, or environmental control systems.

In this project, we will use an Arduino microcontroller to read temperature data from a temperature sensor, such as the DHT11 (basic) or DHT22 (more accurate), and then display this data either on an LCD screen (e.g., 16x2 LCD) or a Serial Monitor connected to a PC.

Components Required:
Arduino Board (e.g., Arduino Uno)
Temperature Sensor (e.g., DHT11 or DHT22)
16x2 LCD Display (with or without I2C module)
Jumper Wires
Breadboard
Power Supply (for Arduino and peripherals)
Resistor (if needed for the temperature sensor)
Working Principle:
Temperature Sensor:
The DHT11 or DHT22 sensor is used to measure the temperature (and optionally humidity) of the environment.
These sensors communicate with the Arduino using a digital signal, where the Arduino sends a request for data, and the sensor responds with the temperature data.
Data Processing:
The Arduino reads the temperature data from the sensor and processes it. The data may need to be converted (e.g., converting raw data to Celsius or Fahrenheit).
Display:
The processed temperature data is either displayed on an LCD screen (using libraries such as LiquidCrystal or LiquidCrystal_I2C) or sent to a Serial Monitor for visualization on a computer.
Output Options:
LCD Display: A 16x2 LCD is often used in these systems, where it displays the temperature value on two lines of the screen.
Serial Monitor: The temperature value can also be printed on the Serial Monitor for monitoring via a computer.
Circuit Setup:
Temperature Sensor (DHT11 or DHT22):

VCC pin connects to 5V on the Arduino.
GND pin connects to GND on the Arduino.
Data pin connects to a digital pin (e.g., Pin 7) on the Arduino.
LCD Display (16x2 LCD with I2C):

VCC pin connects to 5V on the Arduino.
GND pin connects to GND on the Arduino.
SDA pin connects to A4 (on Arduino Uno).
SCL pin connects to A5 (on Arduino Uno).
Wiring Diagram:

DHT11 (or DHT22) sensor connected to the Arduino: VCC → 5V, GND → GND, and Data → Pin 7 (or any other digital pin).
LCD 16x2 (with I2C): VCC → 5V, GND → GND, SDA → A4, SCL → A5.
Applications:
Home Automation: To monitor the temperature in different rooms or spaces and automatically trigger cooling/heating systems.
Weather Stations: For monitoring environmental temperature.
HVAC Systems: To control heating, ventilation, and air conditioning systems based on the ambient temperature.
Industrial Monitoring: To monitor temperature in industrial processes where temperature control is crucial.
Output ![Temp Monitoring System](https://github.com/user-attachments/assets/fa690b59-877e-4bbe-9a16-07d62f931367)

