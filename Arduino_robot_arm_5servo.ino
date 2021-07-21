#include<Servo.h>
Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;
int pos = 0; 

void setup()
{
 
  myServo1.attach(6); 
  myServo2.attach(5); 
  myServo3.attach(4); 
  myServo4.attach(3);
  myServo5.attach(2); 
}

void loop()
{
  for(pos=0;pos<=90;pos++){
    myServo1.write(pos);
    myServo2.write(pos);
    myServo3.write(pos);
    myServo4.write(pos);
    myServo5.write(pos);
    delay(50);
  }
  
  for(pos=90;pos>=0;pos--){
    myServo1.write(pos);
    myServo2.write(pos);
    myServo3.write(pos);
    myServo4.write(pos);
    myServo5.write(pos);
    delay(50);
  }
}