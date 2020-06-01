int ledPin = 3;
int brightness = 0;
int fadeAmount = 3;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(ledPin, brightness);
  brightness += fadeAmount;

  if (brightness < 3 || brightness > 150)
    fadeAmount = -fadeAmount;

  delay(30);
}
