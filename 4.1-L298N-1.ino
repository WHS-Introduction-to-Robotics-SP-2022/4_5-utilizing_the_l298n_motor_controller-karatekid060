void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  analogWrite(5, 1023);
  delay(5000);
  analogWrite(5, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
