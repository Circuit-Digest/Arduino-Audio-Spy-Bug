#include <SPI.h>
#include <RF24Audio.h>
#include <RF24.h>
#include "printf.h"

RF24 radio(7,8);
RF24Audio rfAudio(radio,0);

void setup() {
  radio.begin();
  radio.setChannel(10);
  radio.setDataRate(RF24_250KBPS);
  rfAudio.begin();  
  rfAudio.setVolume(7);
  rfAudio. receive();
}

void loop() {}
