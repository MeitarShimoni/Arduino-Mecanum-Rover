void moveForward() {
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
}

void moveBackward() {
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
}

void turnLeft() {
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
}

void turnRight() {
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
}

void stopMotors() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}
