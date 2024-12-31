Name: YASHWANT SUNIL PIMPLAPURE
Company: CODTECH IT SOLUTIONS
ID: CT6WDKG
Domain: Embedded System
Duration: December 2024 to January 2025
Mentor: Codtech Mentor

Bluetooth-Controlled Home Automation System for Switching Devices On and Off
A Bluetooth-controlled home automation system allows you to control household devices (such as lights, fans, or appliances) remotely using a Bluetooth-enabled device, such as a smartphone or tablet. This system is designed to provide easy and convenient access to controlling various home appliances without needing to manually interact with switches or remotes.

In this project, an Arduino or a similar microcontroller serves as the central controller, which interfaces with Bluetooth (using a module like the HC-05 or HC-06) to receive commands from the user's smartphone. The microcontroller is connected to a relay module, which controls the switching of household devices.

Components Required:
Arduino Board (e.g., Arduino Uno)
Bluetooth Module (e.g., HC-05 or HC-06)
Relay Module (to control high-voltage devices like lights or fans)
Smartphone with Bluetooth (Android/iOS)
Power Supply (for the Arduino and the devices being controlled)
Jumper Wires
Breadboard (for prototyping)
High Voltage Devices (e.g., light bulbs, fans, or small appliances) for switching
Resistors (optional, for additional circuitry)
Working Principle:
Bluetooth Communication:

The system uses a Bluetooth module (like HC-05) to establish a wireless communication link between the smartphone and the Arduino.
The Bluetooth module connects to the Arduino through its serial interface (RX/TX pins), enabling the Arduino to receive commands wirelessly.
Smartphone Control:

A smartphone application (either a custom app or a general Bluetooth control app) sends commands to the Bluetooth module. These commands are typically a series of simple signals or characters (e.g., '1' to turn on and '0' to turn off).
The app can be developed using platforms like MIT App Inventor, Android Studio, or you can use existing apps like Bluetooth Terminal.
Relay Module:

The Arduino uses the relay module to switch on or off the high-voltage appliances. A relay is an electromagnetic switch that can handle the high current and voltage required to control devices like lights, fans, and other home appliances.
The Arduino sends a signal to the relay module based on the received Bluetooth command. When the relay is activated, it closes the circuit, allowing the connected device to receive power.
Controlling the Devices:

When a command is received from the smartphone (e.g., "1" for ON or "0" for OFF), the Arduino processes it and sends a control signal to the relay.
The relay switches the device on or off based on the received signal.
Circuit Design:
Arduino and Bluetooth Module:

HC-05 Bluetooth Module connects to Arduino via TX and RX pins (usually pins 0 and 1 on Arduino Uno).
The VCC pin of the Bluetooth module connects to 5V and GND to ground.
Relay Module:

The relay module has input pins (IN1, IN2, etc.), which are connected to the digital output pins of the Arduino (e.g., Pin 7 for controlling one relay).
The relay's VCC is powered by the 5V from the Arduino, and the GND goes to Arduino's ground.
The COM (Common) and NO (Normally Open) pins of the relay are used to switch high-voltage devices on or off. When the relay is triggered, it closes the circuit between COM and NO, supplying power to the connected device.
Connecting the Device:

For a device like a light bulb or fan, one terminal of the device is connected to the NO pin of the relay, and the other terminal is connected to the main power source. The relay will act as a switch, controlling the flow of current to the device.
Software (Arduino Sketch).
