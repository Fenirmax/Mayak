
#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>

RF24 radio(9, 8); // CE, CSN
const byte addresses[][10] = {"ADDRESS01","ADDRESS02"};
const genon[] = "0", mayakon[] = "1"
const pin1 = ?? , pin2 = ??

void setup() {
  Serial.begin(9600);  
  radio.begin();  
  radio.openReadingPipe(addresses[1]);
  radio.setPALevel(RF24_PA_MAX);
};


void loop() {
  delay(2000)
  if (radio.available())
  radio.read(&mayakon, sizeof(mayakon))
  digitalwrite(pin1, HIGH)
  digitalwrite(pin2, HIGH)
  else
  delay(60000)




}
