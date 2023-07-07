// C++ code
//
int redled= 6; 
int yellowled= 4; 
int greenled= 2; 
void setup()
{
  pinMode(redled,OUTPUT); 
  pinMode(yellowled,OUTPUT);
  pinMode(greenled,OUTPUT); 

}

void loop()
{digitalWrite(redled,HIGH);
 delay(700);
 for(int i=0 ; i<3; i++)
 {digitalWrite(yellowled,HIGH) ;
   delay(500); 
  digitalWrite(yellowled,LOW); 
  if(i==2)
    continue; 
   delay(500); 
 }
  digitalWrite(redled,LOW); 
 digitalWrite(greenled,HIGH); 
 delay(1000); 
  digitalWrite(greenled,LOW);

}
