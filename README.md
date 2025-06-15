# nRF24L01 Wireless Communication Example for Arduino

This repository contains a simple example for setting up wireless communication between two **nRF24L01** wireless modules using an Arduino. The code initializes the radio modules, prints configuration details to the Serial Monitor, and checks if the modules are working properly.

## Repository Link:
You can access the repository here:  
[https://github.com/zibontaroka/nrf24l01-wireless-communication-example](https://github.com/zibontaroka/nrf24l01-check-connection)

## Features:
- Verifies the functionality of **nRF24L01** modules by printing configuration details such as:
  - **EN_AA**
  - **EN_RXADDR**
  - **RF_CH**
  - **RF_SETUP**
  - **CONFIG**
- Easy to use with Arduino boards.
- Useful for troubleshooting and verifying **nRF24L01** module setups.

## Libraries Included:
- **RF24** library: [RF24 GitHub repository](https://github.com/nRF24/RF24)
- The **RF24** library has been included in this repository inside the `Library` folder for convenience.

## Requirements:
- **Arduino** or compatible microcontroller
- **nRF24L01 module**
- **SPI** and **RF24** libraries for Arduino

## Setup Instructions:
1. Install the required libraries:
   - **RF24** library: [RF24 GitHub](https://github.com/nRF24/RF24)
   
2. Connect the **nRF24L01** module to the Arduino:
   - **CE** pin -> Pin 7
   - **CSN** pin -> Pin 8
   - **MOSI** -> Pin 11
   - **MISO** -> Pin 12
   - **SCK** -> Pin 13
   - **GND** -> Ground
   - **VCC** -> 3.3V (Ensure to use 3.3V, as nRF24L01 cannot run on 5V)

3. Upload the provided code to your Arduino.

4. Open the Serial Monitor at 9600 baud rate to view the module details and confirm it's working.

## 🛡️ License
Licensed under the MIT License. See the `LICENSE` file for details.

The libraries used are under their respective licenses, and you should refer to the original repositories for more details.

## 👨‍💻 Developer
**Md Shaifulla Zibon**  
IoT Systems Designer | SMPS Engineer | Web Dashboard Integrator  
🎓 B.Sc. in Electrical and Electronic Engineering, European University of Bangladesh  

💬 For questions, feature requests, or contributions, open an issue or pull request.
```
