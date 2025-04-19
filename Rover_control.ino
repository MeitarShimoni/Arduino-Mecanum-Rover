

// Functions Of the Rover Here:

void SetMotors(){
  // motors set up maybe later it wont be constant
  motor1.setSpeed(speedpwm);  //front left
  motor2.setSpeed(speedpwm);  // back left
  motor3.setSpeed(speedpwm);  // back right
  motor4.setSpeed(speedpwm);  // front right
  // Servos setup
  Serial.println("Motors Set!");
}

void Forward(int duration) {
  Serial.println("Driving Forward ");
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
  delay(duration);
}

void Backward(int duration) {
  Serial.println("Driving Backward ");
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  delay(duration);
}

void Stop() {
  Serial.println("Motors Stopped ");
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}


void turn360CCW(int time180) {
  Serial.println("Turning 360 degrees ");
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  delay(time180 * 2);
  Stop();
}

void turn180CCW(int time180) {
  Serial.println("Turning 180 degrees ");
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  delay(time180);
  if (time180 > 0){
    Stop();
  }
}

void turn180CW(int time180) {
  Serial.println("Turning 180 degrees ");
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
  delay(time180);
  if (time180 > 0){
    Stop();
  }
  
}

void MoveLeft(int duration){
  Serial.println("Driving Moving Left ");
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);
  delay(duration);
}

void MoveRight(int duration){
  Serial.println("Driving Moving Left ");
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD);
  delay(duration);
}

void GetExcited(int Duration){
  Serial.println("Rover Excited!");
  turn180CW(Duration);
  turn180CCW(Duration);
  turn180CW(Duration);
  turn180CCW(Duration);
  turn180CW(Duration);
  turn180CCW(Duration);
  Stop();
}

void GoSleep(){


}

void WakeUp(){

}
