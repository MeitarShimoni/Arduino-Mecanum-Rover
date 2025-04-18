#include <IRremote.h>

#define IR_RECEIVE_PIN 44

// Replace these with your actual remote codes (use previous test code to get them)
#define IR_FORWARD   0xFFA25D
#define IR_BACKWARD  0xFFE21D
#define IR_LEFT      0xFF22DD
#define IR_RIGHT     0xFF02FD
#define IR_STOP      0xFFC23D

IRrecv irrecv(IR_RECEIVE_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.begin();

  // Setup your motor control pins here
  // For example:
  pinMode(5, OUTPUT);  // Motor A forward
  pinMode(6, OUTPUT);  // Motor A backward
  pinMode(9, OUTPUT);  // Motor B forward
  pinMode(10, OUTPUT); // Motor B backward

  stopMotors();
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.print("Received: ");
    Serial.println(results.value, HEX);

    switch (results.value) {
      case IR_FORWARD:
        Serial.println("Moving Forward");
        // moveForward();
        break;

      case IR_BACKWARD:
        Serial.println("Moving Backward");
        // moveBackward();
        break;

      case IR_LEFT:
        Serial.println("Turning Left");
        // turnLeft();
        break;

      case IR_RIGHT:
        Serial.println("Turning Right");
        // turnRight();
        break;

      case IR_STOP:
        Serial.println("Stopping");
        // stopMotors();
        break;

      default:
        Serial.println("Unknown command");
        break;
    }

    irrecv.resume();  // Ready for the next command
  }
}


