

// Setting pins
int ledPin = 14;
int sensorPin = 27;

void setup() {

  // Setting pinMode for the previously set pins
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn LED on, if the sensor triggers
  } else {
    digitalWrite(ledPin, LOW); // Turn LED off, if the sensor doesn't trigger
  }
}
