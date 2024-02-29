//#include <./avr/iom328p.h>



String sendMessage;
String receivedMessage;



void setPwm (int val)
{
  analogWrite (9, val) ;
  analogWrite (10, val) ;
  TCCR1A = 0b10110000 | (TCCR1A & 0b00001111) ;
}
// a value of 128 should make it not move







// the setup function runs once when you press reset or power the board
void setup() {

  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  //Serial.begin(9600);
  Serial.begin(9600);


}

// the loop function runs over and over again forever
void loop() {


  setPwm(20);
  delay(1000);
  setPwm(20);
  delay(1000);
  
  



}
