// In The Name Of Allah

int x = 10;
const int p = 13;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int result = x + p;

  String strResult = String(result);
  Serial.println(strResult);

  delay(3000);

}
