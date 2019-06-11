/*
インプットライブラリ_温度センサー
温度センサーLM35DZからのアナログ入力値を温度に変換しシリアルモニタに表示する
*/

void setup(){
  Serial.begin(9600);  // シリアル通信速度
}

void loop() {
  int thermoSensorValue = analogRead(A0);
  float voltage = thermoSensorValue * (5.0 / 1023.0);
  Serial.print(voltage * 100);
  Serial.println("℃");
}
