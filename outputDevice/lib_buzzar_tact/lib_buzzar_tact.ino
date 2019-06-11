/*
 * タクトスイッチのON/OFFによって電子ブザーの鳴り方を変える
 */

#define switchPinA 8
#define switchPinB 9
#define switchPinC 10
#define switchPinD 11
#define switchPinE 12
#define buzarPin 6

void setup()
{
  pinMode(switchPinA,INPUT) ;
  pinMode(switchPinB,INPUT) ;
  pinMode(switchPinC,INPUT) ;
  pinMode(switchPinD,INPUT) ;
  pinMode(switchPinE,INPUT) ;
  pinMode(buzarPin, OUTPUT);
}

void loop(){
  if (digitalRead(switchPinA) == HIGH) {
    digitalWrite(buzarPin, HIGH);
    delay(1000);
    digitalWrite(buzarPin, LOW);
    delay(1000);
  }
  else if (digitalRead(switchPinB) == HIGH) {
    digitalWrite(buzarPin, HIGH);
    delay(500);
    digitalWrite(buzarPin, LOW);
    delay(500);
  }
  else if (digitalRead(switchPinC) == HIGH) {
    digitalWrite(buzarPin, HIGH);
    delay(300);
    digitalWrite(buzarPin, LOW);
    delay(500);
  }
  else if (digitalRead(switchPinD) == HIGH) {
    digitalWrite(buzarPin, HIGH);
    delay(100);
    digitalWrite(buzarPin, LOW);
    delay(100);
  }
  else if (digitalRead(switchPinE) == HIGH) {
    digitalWrite(buzarPin, HIGH);
    delay(1500);
    digitalWrite(buzarPin, LOW);
    delay(500);
  }
  else {
    digitalWrite(buzarPin, LOW);
    delay(500);
  }
}
