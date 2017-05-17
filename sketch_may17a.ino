const int analogPin = A0;   // the pin that the potentiometer is attached to
const int ledCount = 10;    // the number of LEDs in the bar graph
int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   // an array of pin numbers to which LEDs are attached
void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}
void loop() {
  // read the potentiometer:
  int sensorReading = analogRead(analogPin); 
  // map the result to a range from 0 to the number of LEDs:
  int ledLevel = map(sensorReading, 0, 700, 0, ledCount);
  // loop over the LED array:
  for (int thisLed = 0; thisLed <= ledCount; thisLed++) {
    // if the array element's index is less than ledLevel,
    // turn the pin for this element on:
      int sensorReading = analogRead(analogPin);
      digitalWrite(ledPins[thisLed], HIGH);
      delay(50+sensorReading);
  }
    // turn off all pins higher than the ledLevel:
  for (int thisLed =ledCount ; thisLed >=0; thisLed--){
       int sensorReading = analogRead(analogPin);
      digitalWrite(ledPins[thisLed],LOW);
      delay(50+sensorReading);       
    }   
}
