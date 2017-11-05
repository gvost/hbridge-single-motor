// H Bridge Motor Control w/Arduino

const int switchPin   = 2;
const int motorPinOne = 3;
const int motorPinTwo = 4;
const int enablePin   = 9;

void setup() {

  pinMode(switchPin, INPUT);

  pinMode(motorPinOne, OUTPUT);

  pinMode(motorPinTwo, OUTPUT);

  digitalWrite(enablePin, HIGH);

}

void loop() {

  if (digitalRead(switchPin) == HIGH) {

    digitalWrite(motorPinOne, LOW);

    digitalWrite(motorPinTwo, HIGH);

  } else {

    digitalWrite(motorPinOne, HIGH);

    digitalWrite(motorPinTwo, LOW);

  }
  // For Simulation ONLY
  delay(10);

}
