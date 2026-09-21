#include<Servo.h>
Servo mm;
void setup() {
mm.attach(2);
pinMode(13,OUTPUT);
}
void loop() {
mm.write(1);
digitalWrite(13,HIGH);
delay(2000);
mm.write(180);
digitalWrite(13,LOW);
delay(2000);
}
