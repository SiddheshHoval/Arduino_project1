#include <Servo.h>

float temp = 0;
int speed_mode = 0;
Servo motor;

void setup() {
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  temp = analogRead(A0);

  if(temp < 27){
    speed_mode = 0;
  }else if(temp > 27 && temp < 32){
    speed_mode = 2;
  }else if(temp > 32 && temp < 36){
    speed_mode = 1;
  }

  if(speed_mode != 0){
    for(int i = 0; i <= 360; i++){
      motor.write(i);
      delay(speed_mode);
      Serial.println(speed_mode);
    }
  }

}
