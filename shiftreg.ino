void setup() {
  // put your setup code here, to run once:
pinMode(A4, OUTPUT);
pinMode(A5, OUTPUT);
pinMode(A6, OUTPUT);

digitalWrite(A4, LOW);
digitalWrite(A5, LOW);
digitalWrite(A6, HIGH);


pinMode(A0, OUTPUT);

digitalWrite(A0, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 digitalWrite(A6, LOW);
 delay(50);
 digitalWrite(A6, HIGH);

  digitalWrite(A5, LOW);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);

  digitalWrite(A5, LOW);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);

   digitalWrite(A5, HIGH);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);


  digitalWrite(A5, LOW);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);

    digitalWrite(A5, HIGH);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);

   digitalWrite(A5, LOW);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);

   digitalWrite(A5, HIGH);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);


   digitalWrite(A5, LOW);
 digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);

   digitalWrite(A5, LOW);
  digitalWrite(A4, HIGH);
  delay(1000);
  digitalWrite(A4, LOW);
  delay(1000);

digitalWrite(A0, HIGH);
delay(1000);
  digitalWrite(A0, LOW);
delay(10000);
}
