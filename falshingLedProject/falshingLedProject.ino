int ledPin = 2;   //defines the pin connected to the led


void setup() {
  // sets pin d2 up redy for output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turns d2 on
  digitalWrite(ledPin, HIGH);
  // pasues the code for 500 milliseconds
  delay(500);
  // turns the  d2 pin off
  digitalWrite(ledPin, LOW);
  // pauses the code for 500 milliseconds
  delay(500);
}