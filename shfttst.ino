const int clearPin = A2;
const int dataPin = A3;
const int SRCLK = A4;
const int RCLK = A5;
void shift( int x);

void setup() {
  // put your setup code here, to run once:
  pinMode(clearPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(SRCLK, OUTPUT);
  pinMode(RCLK, OUTPUT);

  digitalWrite(clearPin, HIGH);
  digitalWrite(dataPin, LOW);
  digitalWrite(SRCLK, LOW);
  digitalWrite(RCLK, LOW);
  digitalWrite(clearPin, LOW);
  delay(50);
  digitalWrite(clearPin, HIGH);
  delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 0b0011110000;
  shift(x);
  shift(0b0011110000);
  delay(50);
  shift(0b1011110000);
delay(5000);
  shift(0b0100101010);
  delay(50);
  shift(0b1100101010);

  delay(5000);
}

void shift( int x) {
  
  for(int i = 15; i > -1; i--) {
    int power = 1;
   for(int j = i; j > 0; j--) {
    power = 2* power;
   }
   if((x & power) > 0) {
    digitalWrite(dataPin,HIGH);
   }
    
    digitalWrite(SRCLK, HIGH);
    delay(50);
    digitalWrite(SRCLK, LOW);
    delay(50);
    digitalWrite(dataPin, LOW);
    delay(50);
  }
  digitalWrite(RCLK, HIGH);
  delay(50);
  digitalWrite(RCLK, LOW);
  delay(50);
}
