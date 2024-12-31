Name: YASHWANT SUNIL PIMPLAPURE
Company: CODTECH IT SOLUTIONS
ID: CT6WDKG
Domain: Embedded System
Duration: December 2024 to January 2025
Mentor: Codtech Mentor

Push Button Counter with Temperature Sensor to Display Temperature Data on an LCD or Serial Monitor
This project involves creating a simple push-button counter system integrated with a temperature sensor. The system will display the temperature data on an LCD screen or serial monitor when the push button is pressed. Here’s how the project works in detail:

Components Required:
Arduino Board (e.g., Arduino Uno)
Push Button
Temperature Sensor (e.g., DHT11 or TMP36)
LCD Display (e.g., 16x2 LCD with I2C module)
Resistors (for button pull-down or pull-up)
Jumper Wires
Breadboard (optional but recommended for prototyping)
Working Principle:
Temperature Sensor:

The temperature sensor will read the ambient temperature. Common sensors for this purpose are the DHT11 or DHT22 for basic applications. For more accuracy, the TMP36 or LM35 can be used.
The sensor outputs the temperature data in a digital or analog format, which can be read by the Arduino.
Push Button:

The button will act as an input device to trigger the reading of the temperature. When the button is pressed, the Arduino will initiate a reading from the temperature sensor and then display the data on an LCD screen or Serial Monitor.
A simple push-button circuit will be used, typically with a pull-down or pull-up resistor to ensure stable input readings.
LCD Display or Serial Monitor:

If using an LCD, the temperature will be shown on the screen in real-time. The LCD might be a 16x2 character LCD with I2C for easy wiring.
If using the Serial Monitor, the temperature data will be sent to the monitor over the serial communication interface, where you can view the readings on a computer.
Logic:

The Arduino continuously checks the state of the push button. When the button is pressed, it triggers the reading of the temperature from the sensor.
The temperature data is processed by the Arduino, and the result is either displayed on the LCD or sent to the Serial Monitor.
Circuit Setup:
Push Button: One side is connected to a digital input pin (e.g., Pin 2 on the Arduino) and the other to ground (GND). A pull-up or pull-down resistor ensures that the pin reads a defined state when the button is not pressed.

Temperature Sensor: Connect the VCC and GND pins of the temperature sensor to the 5V and ground pins of the Arduino, respectively. The Data pin of the temperature sensor goes to a designated input pin (e.g., Pin 7).

LCD: If using an LCD with I2C, connect the SDA and SCL pins to the corresponding pins on the Arduino (A4 and A5 for Arduino Uno). If not using I2C, connect the data pins of the LCD directly to the Arduino digital pins.
