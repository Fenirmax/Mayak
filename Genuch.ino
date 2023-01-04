
#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>

RF24 radio(9, 8);          // CE, CSN
const byte address[10] = "ADDRESS01";
const genon[] = "0", mayakon[] = "1"

void setup() {
Serial.begin(9600);
radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MAX);
  radio.stopListening();
};

void loop() {
radio.write(&genon, sizeof(genon)); Serial.println(genon);
delay(1000)
}
