# Robotic Arm Project
This project demonstrates the design and control of a 3-DOF (Degrees of Freedom) robotic arm using Arduino and servo motors. The arm is manipulated via a joystick, with the base rotation and vertical movement controlled by the joystick's X and Y axes, respectively. Additionally, the arm features a pinching claw that opens and closes with the joystick’s button press.

## Functionality
Base Movement: The base servo motor rotates according to the joystick’s X-axis input.

Vertical Movement: The middle servo motor controls the up-and-down motion using the Y-axis.

Pincher Claw: The claw defaults to closed and opens when the joystick's button is pressed.

## Hardware Components
* 3 Servo Motors: Controls the base, middle joint, and pincher mechanism.
* Joystick: Controls the movement of the base and middle arm, and operates the claw via the switch.
* Arduino: Processes joystick inputs and controls the servos.
* 6V Power Supply: External power is recommended since the Arduino might not supply enough power for 3 servos, which can damage the board.
* Breadboard: Used for making connections and sharing a common ground between the power supply and Arduino.
* Jumper Wires (Male-to-Male): For connecting the servos to the breadboard.
* Jumper Wires (Female-to-Male x5): For connecting the joystick to the Arduino.
* Screws x9: Holds the arm assembly together.
## Software
* Arduino IDE: Used to upload the control code to the Arduino.
## 3D Printing
The robotic arm uses 3D-printed parts, which are available in the 3d folder. Download the robotic arm STL file and convert it to G-code for your 3D printer. The SG90 servo motors can either be glued or fastened with screws to the frame. You may need to clean the inside of the arm assembly’s holes to ensure proper fit.

## Assembly Instructions
Attach two servo motors to the top and bottom of the large triangle piece.

Attach the third servo to the flange of the second triangle piece, ensuring the motor body touches the piece, and the axle points outward.

Glue one end of the longest arm piece (piece C) underneath the flange, securing it to the hub beneath the hole.

Attach piece D (the smallest piece) to the third servo. Fit its pin into the long straight piece, and attach the other end to the middle of the L-shaped piece.

Attach the L-shaped piece to piece C (closest to the servo), with the opposite side connected to the short straight piece, which also attaches to the second pin on the claw.

Connect the small triangle to the second servo.

Attach the servo motor armature to the base (3D-printed) and glue it in place to support the arm structure.

Your final assembly should resemble the diagram below: 

![image](https://github.com/user-attachments/assets/f084878a-8ec8-43c5-9823-02040f32a3dd)


## Wiring Instructions
Connect the power supply to the positive and negative rails on the breadboard.
Connect the Arduino’s GND pin to the negative rail.
Connect each servo to the power rails either directly or using jumper wires:
* Base motor: Pin 9
* Middle motor: Pin 10
* Pincher motor: Pin 11
  
Use female-to-male jumper wires to connect the joystick to the Arduino:
* GND and 5V pins should be connected to their respective Arduino pins.
* VRx and VRy should be connected to pins A0 and A1.
* SW (switch) should be connected to pin 2.
## Programming
Download the code from the Robotic-arm folder on GitHub by clicking the green Code button and selecting Download ZIP.
Extract the ZIP file, open the Arduino IDE, and select File > Open to navigate to the .ino file within the extracted folder.
Connect your Arduino to your computer via USB, select the correct board and port under Tools, and click the Upload button to transfer the code to the Arduino.
## Suggestions for Improvement
* Program the arm to move to predefined positions, simulating an assembly line.
* Add a bearing to the base for smoother movement, reducing stress on the bottom servo (optional for larger-scale projects).
