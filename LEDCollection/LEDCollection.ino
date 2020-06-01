int status = 0;
int buttonPin = 13;
int l1 = 9;
int l2 = 10;
int l3 = 11;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);

  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(buttonPin) == 0)
  {
    ( status < 3 ? status++ : status = 1 );
    delay(300);
  }

  switch (status)
  {
    case 1:
      digitalWrite(l1, HIGH);
      digitalWrite(l2, HIGH);
      digitalWrite(l3, HIGH);
      break;

    case 2:
      digitalWrite(l1, LOW);
      digitalWrite(l2, LOW);
      digitalWrite(l3, LOW);
      break;

    case 3:
      while (digitalRead(buttonPin) != 0)
      {
        digitalWrite(l3, LOW);
        digitalWrite(l1, HIGH);
        delay(1000);
        digitalWrite(l1, LOW);
        digitalWrite(l2, HIGH);
        delay(1000);
        digitalWrite(l2, LOW);
        digitalWrite(l3, HIGH);
        delay(1000);
      }
      status = 1;
      break;
      

  }

}
