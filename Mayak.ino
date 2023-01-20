
#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>

RF24 radio(9, 8); // CE, CSN
const byte addresses[][10] = {"ADDRESS01","ADDRESS02"};
const char genon[] = "0";
const char mayakon[] = "1";

void setup() {
  Serial.begin(9600);  
  radio.begin();  
  radio.openWritingPipe(addresses[1]);    // ADDRESS02
  radio.openReadingPipe(1, addresses[0]); // ADDRESS01
  radio.setPALevel(RF24_PA_MAX);
};


void loop() {
  delay(10000);
  radio.startListening();
  if (radio.available()) {
    radio.stopListening();
  radio.write(&genon, sizeof(genon));
  }
  else {
  radio.stopListening();
  radio.write(&mayakon, sizeof(mayakon));
  }
  delay(60000);
}
