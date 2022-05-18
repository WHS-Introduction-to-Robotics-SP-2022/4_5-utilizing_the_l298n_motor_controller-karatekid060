void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  analogWrite(5, 125);
  delay(3000);
  analogWrite(5, 0);
  delay(2000);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  analogWrite(5, 1023);
  delay(2000);
  analogWrite(5, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
