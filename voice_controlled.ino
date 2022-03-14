int mt1=5;
int mt2=6;
int mt3=9;
int mt4=10;
String readString;
char c;
void setup()
{
  // put your setup code here, to run once:
   pinMode(mt1,OUTPUT);
  pinMode(mt2,OUTPUT);
  pinMode(mt3,OUTPUT);
  pinMode(mt4,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  while(Serial.available())
  {
    c=Serial.read();
    delay(3);
    readString=readString+c;
  }
  if(readString.length()>0)
  {
    Serial.println(readString); 
  if(readString=="forward")
  {analogWrite(mt1,255);
    analogWrite(mt2,0);
    analogWrite(mt3,255);
    analogWrite(mt4,0);
    delay(150);
    analogWrite(mt1,0);
    analogWrite(mt2,0);
    analogWrite(mt3,0);
    analogWrite(mt4,0);
  }
  //right
  else if(readString=="right")
  {
    analogWrite(mt1,255);
    analogWrite(mt2,0);
    analogWrite(mt3,0);
    analogWrite(mt4,150);
    delay(50);
    analogWrite(mt1,255);
    analogWrite(mt2,0);
    analogWrite(mt3,255);
    analogWrite(mt4,0);
    delay(50);
     analogWrite(mt1,0);
    analogWrite(mt2,0);
    analogWrite(mt3,0);
    analogWrite(mt4,0);
    
  }
  //left
  else if(readString=="left")
  {analogWrite(mt1,150);
    analogWrite(mt2,0);
    analogWrite(mt3,250);
    analogWrite(mt4,0);
    delay(50);
    analogWrite(mt1,255);
    analogWrite(mt2,0);
    analogWrite(mt3,255);
    analogWrite(mt4,0);
    delay(50);
    analogWrite(mt1,0);
    analogWrite(mt2,0);
    analogWrite(mt3,0);
    analogWrite(mt4,0);
}
//backward
else if(readString=="backward")
{
  
     analogWrite(mt1,0);
    analogWrite(mt2,255);
    analogWrite(mt3,0);
    analogWrite(mt4,255);
    delay(100);
    analogWrite(mt1,0);
    analogWrite(mt2,0);
    analogWrite(mt3,0);
    analogWrite(mt4,0);
}
//stop

  else if(readString=="stop")
{
  
     analogWrite(mt1,0);
    analogWrite(mt2,0);
    analogWrite(mt3,0);
    analogWrite(mt4,0);
    delay(50);
}
  }
readString="";

  }
    
