void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  analogWrite(5, 50);
  delay(1000);
  analogWrite(5, 100);
  delay(1000);
  analogWrite(5, 150);
  delay(1000);
  analogWrite(5, 200);
  delay(1000);
  analogWrite(5, 255);
  delay(1000);
  analogWrite(5, 200);
  delay(1000);
  analogWrite(5, 150);
  delay(1000);
  analogWrite(5, 100);
  delay(1000);
  analogWrite(5, 50);
  delay(1000);
  analogWrite(5, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
