/*
  アウトプットライブラリ_ステッピングモーター
*/

#include "Keyboard.h"

//STEPPER MOTOR SPEED CONTROL
int APHASE = 4;
int AENBL = 5;
int BPHASE = 6;
int BENBL = 7;
int state = 1;
char inChar = 'r';

void setup() {
  pinMode(APHASE, OUTPUT);
  pinMode(AENBL, OUTPUT);
  pinMode(BPHASE, OUTPUT);
  pinMode(BENBL, OUTPUT);
  digitalWrite(AENBL, HIGH);
  digitalWrite(BENBL, HIGH);
  // open the serial port:
  Serial.begin(9600);
  // initialize control over the keyboard:
  // Keyboard.begin();
}

//void READ_VR(void){
// VR_VALUE = analogRead(VR_PIN);
//}

void DELAY_WAIT(void) {
  for (int i = 0; i < (200) ; i++)
    delayMicroseconds(10);
}

void rotateCW() {
  //READ_VR();
  for (int i = 0; i < (500); i ++) {
    digitalWrite(APHASE, HIGH);
    DELAY_WAIT();
    digitalWrite(BPHASE, HIGH);
    DELAY_WAIT();
    digitalWrite(APHASE, LOW);
    DELAY_WAIT();
    digitalWrite(BPHASE, LOW);
    DELAY_WAIT();
  }
}
void rotateCCW() {
  //READ_VR();
  for (int i = 0; i < (50); i ++) {
    digitalWrite(BPHASE, HIGH);
    DELAY_WAIT();
    digitalWrite(APHASE, HIGH);
    DELAY_WAIT();
    digitalWrite(BPHASE, LOW);
    DELAY_WAIT();
    digitalWrite(APHASE, LOW);
    DELAY_WAIT();
  }
}

void loop() {

  if (Serial.available() > 0) {
    // read incoming serial data:
    char inChar = Serial.read();
  
   if (inChar = 'r') {
      rotateCW ();
      //rotateCCW ();
    }
  }
}
