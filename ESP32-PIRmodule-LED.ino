
int ledPin = 14;
int sensorPin = 27;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); // LED einschalten, wenn der Sensor auslöst
  } else {
    digitalWrite(ledPin, LOW); // LED ausschalten, wenn der Sensor nicht auslöst
  }
}
