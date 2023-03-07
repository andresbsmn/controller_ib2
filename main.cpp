#define HID_CUSTOM_LAYOUT
#define LAYOUT_FRENCH_BELGIAN
#include <Arduino.h>
#include "HID-Project.h"
#include "Buzzerdriver.h"
#include "Serial_driver.h"

const int pinButton=15;


void setup() {
  // put your setup code here, to run once:
  buzzer_begin();
  serialUSB_begin();
  pinMode(pinButton,INPUT_PULLUP);
  Keyboard.begin();
  

}

void loop() {
  
  
  if(serial_signal()){
    buzzer_push();
  }
  if(!digitalRead(pinButton)){
    Keyboard.write('a');
    delay(20);

  }
}