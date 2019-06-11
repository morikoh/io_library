/*
アウトプットライブラリ_ソレノイド
ソレノイドを制御する
*/

const int solenoidPin = 8;

void setup() {
  pinMode(solenoidPin, OUTPUT);
}

void loop() {
    digitalWrite(solenoidPin, LOW); // ソレノイドOFF
    delay(1000);    
    digitalWrite(solenoidPin, HIGH); // ソレノイドON
    delay(80);
}
