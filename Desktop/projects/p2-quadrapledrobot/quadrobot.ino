#include <Servo.h>

Servo myservo1;  
Servo myservo2;  
Servo myservo3;  
Servo myservo4;  
Servo myservo5;  
Servo myservo6;  
Servo myservo7;  
Servo myservo8;  


int pos1 = 90;   
int pos2 = 0;   

void setup() {
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  myservo4.attach(12);
  myservo5.attach(3);
  myservo6.attach(4);
  myservo7.attach(5);
  myservo8.attach(6);

}

void loop() {
  while(1)
  {
  while(pos1<121)
  {
  myservo2.write(pos1);
  myservo4.write(-pos1);
  delay(15);
  pos1=pos1+1;
  }
  
    while(pos2<31)
  {
  myservo1.write(pos2);
  myservo3.write(-pos2);
  delay(15);
  pos2=pos2+1;
  }
  while(pos1<121)
  {
  myservo6.write(pos1);
  myservo8.write(-pos1);
  delay(15);
  pos1=pos1+1;
  }
    while(pos2<31)
  {
  myservo5.write(pos2);
  myservo7.write(-pos2);
  delay(15);
  pos2=pos2+1;
  }
   while(pos1>90)
  {
  myservo2.write(pos1);
  myservo4.write(-pos1);
  delay(15);
  pos1=pos1-1;
  }
   while(pos2>1)
  {
  myservo1.write(pos2);
  myservo3.write(-pos2);
  delay(15);
  pos2=pos2-1;
  }
   while(pos1>90)
  {
  myservo6.write(pos1);
  myservo8.write(-pos1);
  delay(15);
  pos1=pos1-1;
  }
  while(pos2>1)
  {
  myservo5.write(pos2);
  myservo7.write(-pos2);
  delay(15);
  pos2=pos2-1;
  }
  }
}
