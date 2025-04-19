#include <IRremote.hpp>
#include <AFMotor.h>
// #include <Servo.h>

#define IR_RECEIVE_PIN 18

// Replace these with your actual remote codes (use previous test code to get them)
#define IR_FORWARD   0x18
#define IR_BACKWARD  0x52
#define IR_LEFT      0x8
#define IR_RIGHT     0x5A
#define IR_STOP      0x1C
#define IR_Exited    0x45

#define Right90    0xD
#define Left90    0x16
#define Turn180    0x19

// === Function Declarations ===
void Forward(int duration);
void Backward(int duration);
void Stop();
void turn180CCW();
void turn180CW();
void MoveLeft(int duration = 500);
void MoveRight(int duration = 500);
void GetExcited(int duration);
void SetMotors();

IRrecv irrecv(IR_RECEIVE_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

  SetMotors();
  Serial.println("Rover Starting...");
  GetExcited(250); // At starup he will be exited to   
}

void loop() {
  if (IrReceiver.decode()) {

    Serial.print("Received: ");
    Serial.println(IrReceiver.decodedIRData.command, HEX);

    switch (IrReceiver.decodedIRData.command) {

      Serial.print("Raw IR Value: 0x");
      Serial.println(IrReceiver.decodedIRData.command, HEX);

      case IR_FORWARD:
        Forward(0);
        break;

      case IR_BACKWARD:
        Backward(0);
        break;

      case IR_LEFT:
        MoveLeft(0);
        break;

      case IR_RIGHT:
        MoveRight(0);
        break;

      case IR_STOP:
        Stop();
        break;

      case IR_Exited:
        GetExcited(250);
        break;

      case Right90:
        turn180CCW(1090*2.2/16);
        break;

      case Left90:
        turn180CW(1090*2.2/18);
        break;

      case Turn180:
        turn180CW(1090*2.2*0.7);
        break;

      default:
        Serial.println("Unknown command");
        // Stop();
        break;
    }

    IrReceiver.resume();  // Prepare for next signal
  }
}

