/*
アウトプットライブラリ_電子ブザー
電子ブザー16mm HDB06LFPNを鳴らす
*/

const int buzzerPin 9 // ブザーに接続するピン番号

//// thermin parameter
//float basetone = 2500; // 基準音
//float sensivity = 5.8; // センサの感度調整
//float valoffset = ANALOGMAX/5*0.5; // オフセット

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

// output audio
void loop() {
  digitalWrite(buzzerPin, HIGH);
  delay(1000);
  digitalWrite(buzzerPin, LOW);
  delay(100);
}
