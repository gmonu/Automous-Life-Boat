#include<Servo.h>
Servo servo;

void setup() 
{
  servo.attach(8);
  servo.write(90);

  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);  
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available() > 0)
  {
  

    if(Serial.read() == 's')
    {
      
      servo.write(60);
      digitalWrite(12,HIGH);  

      digitalWrite(2,HIGH);
            digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);

      while(Serial.read() != 'w');
      servo.write(90);
      digitalWrite(2,LOW);
            digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
    }
   
    
  }  

    else
    {
      digitalWrite(13,LOW);
    }
}
