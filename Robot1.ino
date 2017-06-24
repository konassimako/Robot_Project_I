#include <Servo.h>

Servo myServo;
int value;
int angle;
//int switchState;
//int const potensiometer = A0;

void servoWrite( int angle) {

  if (angle >180) {

    double t = (193/90.0) * (angle/2.0);
    
    digitalWrite(10,HIGH);
    myServo.write(180);
    delay(t);
    digitalWrite(10,LOW);
    delay(150);
    digitalWrite(10,HIGH);
    myServo.write(180);
    delay(t);
    digitalWrite(10,LOW);
  
  } else {

    double t = (193/90.0) * angle;
    
    digitalWrite(10,HIGH);
    myServo.write(180);
    delay(t);
    digitalWrite(10,LOW);
  }

  delay(500);
}


void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  myServo.attach(9);
  
  servoWrite(180);
  servoWrite(90);
}

void loop() {
  
}
