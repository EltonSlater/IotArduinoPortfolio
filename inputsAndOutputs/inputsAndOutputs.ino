// defines the pin connected to the led
int ledpin = 4;
// defines the pin connected to the switch
int switchpin = 2;

void setup() {\
  // sets the pin d2 up to output to the led
  pinMode(ledpin, OUTPUT);
  // sets the pin d4 up to get input from the switch
  pinMode(switchpin, INPUT);
}

void loop() {
  // checks if d4 is recieving energy and if it is turns on d2
  if(digitalRead(switchpin) == HIGH)
  {
    digitalWrite(ledpin, HIGH);
  }
  // checks if d4 isnt receiving energy and if it isnt turns off d2
  if(digitalRead(switchpin) != HIGH)
  {
    digitalWrite(ledpin, LOW);
  }

}
