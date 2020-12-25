int pinIN=14;
int pinOUT=2;
int count=0;
int value=0;
void setup()
{
  pinMode(pinIN, INPUT);
  pinMode(pinOUT, OUTPUT);
}
void loop()
{  
 
  value=digitalRead(pinIN);
  if(value==HIGH)
  {
     count++;
   
     if(count==2)
      {
       digitalWrite(pinOUT, LOW);
       count=0;
       delay(1200);
      }
     else
      {
       digitalWrite(pinOUT, HIGH);
       delay(1200);
      }
      
  }
}
  
 
  
  

