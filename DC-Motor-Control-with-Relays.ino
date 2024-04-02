

// Define the digital pin numbers connected to the relay control pins
const int relayPin1 = 10;
const int relayPin2 = 11;
const int relayPin3 = 12;
const int relayPin4 = 13;

void setup() {
  // Set the relay control pins as outputs
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
}

void loop() {
  // Turn on Relay 1 and rotate the motor in one direction
  digitalWrite(relayPin1, HIGH);
  delay(1000);
  digitalWrite(relayPin1, LOW);

  // Turn on Relay 2 and rotate the motor in the other direction
  digitalWrite(relayPin2, HIGH);
  delay(1000);
  digitalWrite(relayPin2, LOW);

  // Repeat the same process for the other two relays if needed
}
