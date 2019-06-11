/*
  インプットライブラリ_フォトリフレクタ
  フォトリフレクタからのアナログ入力値をシリアルモニタに表示する
*/

void setup() {
  Serial.begin(9600);  // シリアル通信速度

}

void loop() {
  float photoReflectorValue = analogRead(A0);
  Serial.println(photoReflectorValue);
}
