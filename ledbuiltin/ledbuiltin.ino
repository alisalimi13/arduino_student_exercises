void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (int i = 3000; i > 0; i -= 200)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(i);
  }
  

}
