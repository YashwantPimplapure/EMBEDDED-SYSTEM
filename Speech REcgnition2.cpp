#include <SoftwareSerial.h>

// Define pins for the voice recognition module
SoftwareSerial voiceModule(2, 3); // RX, TX pins for the module

// Define device control pins
const int ledPin = 13; // Built-in LED on most Arduino boards

void setup() {
  // Initialize serial communication
  Serial.begin(9600);         // For debugging with PC
  voiceModule.begin(9600);    // For communication with the voice module

  // Setup device control pins
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  // Initialize voice module
  Serial.println("Initializing voice module...");
  delay(1000);
  if (voiceModuleAvailable()) {
    voiceModule.print(0xAA);  // Send initialization command
    Serial.println("Voice module initialized!");
  } else {
    Serial.println("Failed to initialize voice module!");
  }
}

void loop() {
  if (voiceModuleAvailable()) {
    int command = voiceModule.read(); // Read command from the module

    // Debugging: Show the received command
    Serial.print("Command received: ");
    Serial.println(command);

    // Process the command
    switch (command) {
      case 1:
        // Command 1: Turn on the light
        digitalWrite(ledPin, HIGH);
        Serial.println("Light turned ON");
        break;
      case 2:
        // Command 2: Turn off the light
        digitalWrite(ledPin, LOW);
        Serial.println("Light turned OFF");
        break;
      default:
        Serial.println("Unknown command received");
        break;
    }
  }
}

bool voiceModuleAvailable() {
  return voiceModule.available() > 0;
}
