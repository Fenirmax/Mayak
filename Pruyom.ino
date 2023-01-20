
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
  radio.openReadingPipe(1, addresses[0]);
  radio.setPALevel(RF24_PA_MAX);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
};


void loop() {
  delay(2000);
  if (radio.available()){
  radio.read(&mayakon, sizeof(mayakon));
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  Serial.println(mayakon);    
  }
  else{
    radio.read(&genon, sizeof(genon))
    delay(60000);
  }
}
