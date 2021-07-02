#include <Servo.h>

Servo srv4;
Servo srv5;
Servo srv6;
Servo srv1;
Servo srv2;
Servo srv3;

//initial position when the robot first turned on
int i=0;

void setup() {
  srv4.attach(11);
  srv5.attach(10);
  srv6.attach(9);
   srv1.attach(6);
   srv2.attach(5);
   srv3.attach(3);
}

void loop() {
  for (i=0; i<90; i++)
  {
    srv4.write(i);
    srv1.write(i);
  
  }
  for (i=90;i<135; i++)
  {
    srv5.write(i);
    srv2.write(i);
   
  }
  
  //first move: waving with one hand
  for (i=0;i<90;i++){
    srv3.write(i);
    delay(10);
  }
  
  //second move: sadness where both hands fall beside the robot
  
  for (i<90; i=0; i--)
  {
    srv4.write(i);
    srv1.write(i);
  
  }
  for (i<135;i=0; i--)
  {
    srv5.write(i);
    srv2.write(i);
   
  }
  
  //third move:hooray! 
  
  for (i=0; i>180; i++)
  {
    srv4.write(i);
  
  }
  for (i=0; i>180; i++)
  {
    srv1.write(i);

  }
}







