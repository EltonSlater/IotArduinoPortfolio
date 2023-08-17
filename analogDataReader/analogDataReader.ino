// defines the pin that recives input from the potentiometer
int inputpin = 2;
void setup() {
  // tells the device to be ready to exchange messages at the serial monitor 9600
  Serial.begin(9600);
  // gets pin d2 ready to recive input
  pinMode(inputpin, INPUT);
  // defines how precise the esp32 is when reading inputs in this case at 12 bits or 4096 individual numbers
  analogReadResolution(12);

}

void loop() {
  // print the amount of power being recieved at the pin d2
  Serial.println(analogRead(inputpin));
  // pauses the code for 100 milliseconds so the code doesnt print to the console an unnecassary amount of times 
  delay(100);

}
