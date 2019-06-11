/*
 * タクトスイッチのON/OFFによってLEDの光り方を変える
 */

#define switchPinA 8
#define switchPinB 9
#define switchPinC 10
#define switchPinD 11
#define switchPinE 12
#define ledPin 3

void setup()
{
  pinMode(switchPinA,INPUT) ;
  pinMode(switchPinB,INPUT) ;
  pinMode(switchPinC,INPUT) ;
  pinMode(switchPinD,INPUT) ;
  pinMode(switchPinE,INPUT) ;
  pinMode(ledPin, OUTPUT);
}

void loop(){
  if (digitalRead(switchPinA) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
  else if (digitalRead(switchPinB) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  else if (digitalRead(switchPinC) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  else if (digitalRead(switchPinD) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  else if (digitalRead(switchPinE) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(1500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  else {
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}
