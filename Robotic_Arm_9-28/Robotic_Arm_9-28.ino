#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;

int s1 = 9;  //base servo
int s2 = 10; // middle servo
int s3 = 11; //pincher servo

const int SW_pin = 2; // digital pin connected to joystick switch output
const int X_pin = A0; // analog pin connected to joystick X output
const int Y_pin = A1; // analog pin connected to joystick Y output

int base, middle, pincher;

void setup() {
  Serial.begin(9600);
  servo1.attach(s1);
  servo2.attach(s2);
  servo3.attach(s3);

  pinMode(SW_pin, INPUT_PULLUP);
  digitalWrite(SW_pin, HIGH);
}

void loop() {
 
  // Servo positions are controlled by the joystick. Base = x, up/down = y, claw = switch
  pincher = digitalRead(SW_pin);
  base = map(analogRead(X_pin), 0,1023,0,180);
  middle = map(analogRead(Y_pin), 0,1023,0,180);

  // claw should be closed by default.
  // If the switch is pressed, the claw opens, otherwise it is closed
  if(pincher==1){
    servo3.write(180);
  } else{
    servo3.write(0);
  }
  
  // update the servo positions
  servo1.write(base);
  servo2.write(middle);

  delay(150); 
}