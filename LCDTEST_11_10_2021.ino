void setup() {
  // put your setup code here, to run once:
  // sets Arduino pins 1 to 7 as outputs, pin 0 as input
DDRD = DDRD | B11111111;  // this is safer as it sets pins 2 to 7 as outputs
                    // without changing the value of pins 0 & 1, which are RX & TX 
 DDRB = B00111111;
 DDRD = B11111100;
 PORTD = B00000000;
 PORTB = B00000000;

}

void loop() {
  // put your main code here, to run repeatedly:

delay(50); 
digitalWrite(9, LOW);
PORTD = B00000000;
PORTB = B00001111; 
 delay(1000);
 PORTB = B0100000 | (PORTB & B10111111);
 delay(1000);
 
 PORTB = B00000000;
 PORTB =  (PORTB & B11011111);
 delay(1000);



delay(50); 

PORTD = B10100000;
PORTB = B00010010; 
 delay(1000);
 PORTB = B0100000 | (PORTB & B10111111);
 delay(1000);
 
 PORTB =  (PORTB & B11011111);
 delay(1000);




PORTD = B10100000;
PORTB = B00011000; 
 delay(1000);
 PORTB = B0100000 | (PORTB & B10111111);
 delay(1000);
 
 PORTB =  (PORTB & B11011111);
 delay(1000);




 PORTD = B00000000;
PORTB = B00001000; 
 delay(1000);
 PORTB = B0100000 | (PORTB & B10111111);
 delay(1000);
 
 PORTB = B00000000;
 PORTB =  (PORTB & B11011111);
 delay(1000);
 
}
