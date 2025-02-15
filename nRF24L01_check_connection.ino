/*
  This code demonstrates basic communication between two nRF24L01 modules.
  The code prints module configuration details to the Serial Monitor for verification.
  If your serial output contains the following values, your nRF24L01 module is working correctly:
  
  EN_AA          = 0x3f
  EN_RXADDR      = 0x02
  RF_CH          = 0x4c
  RF_SETUP       = 0x03
  CONFIG         = 0x0f
  
  License: This code is under the public domain.

*/

#include <SPI.h>
#include <RF24.h>
#include <printf.h>

// Pin setup for the nRF24L01 module
RF24 radio(7, 8);

// Communication addresses for the nodes
byte addresses[][6] = {"1Node", "2Node"};

void setup() {
  // Initialize the nRF24L01 radio
  radio.begin();

  // Set radio power level (Low power to save battery)
  radio.setPALevel(RF24_PA_LOW);

  // Open pipes for communication (write and read)
  radio.openWritingPipe(addresses[0]);
  radio.openReadingPipe(1, addresses[1]);

  // Start listening for incoming messages
  radio.startListening();

  // Initialize Serial communication for debugging
  Serial.begin(9600);
  printf_begin();

  // Print out radio module details for verification
  radio.printDetails();
}

void loop() {
  // The loop is empty as this code is only used for verification
  // Additional functionality can be added to send or receive data
}
