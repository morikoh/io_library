/*
 * タクトスイッチのON/OFFによって電子ブザーの鳴り方を変える
 * tone関数を使って音程を変える
 */

#define switchPinA 8
#define switchPinB 9
#define switchPinC 10
#define switchPinD 12
#define switchPinE 13
#define buzarPin 6

int melo = 200; //音の長さを指定

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
    tone(buzarPin,262,melo) ;
    delay(1000);
  }
  else if (digitalRead(switchPinB) == HIGH) {
    tone(buzarPin,294,melo) ;
    delay(500);
  }
  else if (digitalRead(switchPinC) == HIGH) {
    tone(buzarPin,330,melo) ;
    delay(250);
  }
  else if (digitalRead(switchPinD) == HIGH) {
    tone(buzarPin,440,melo) ;
    delay(500);
  }
  else if (digitalRead(switchPinE) == HIGH) {
    tone(buzarPin,540,melo) ;
    delay(200);
  }
  else {
    digitalWrite(buzarPin, LOW);
    delay(500);
  }
}
