#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); 
//BT TX -->D10
//BT RX -->D11
//BT Vcc -->5V
//BT GND --> GND
void setup()  
{
  // set digital pin to control as an output
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  // begins the connection with bluetooth module
  BT.begin(9600);

}
char a; // stores incoming character 
void loop() 
{
  //when connection available, receive data
  if (BT.available())
  {
    a=(BT.read());
    if (a=='1')
    {
      digitalWrite(13, HIGH);
      BT.println("LED 1 on");
    }
     if (a=='2')
    {
      digitalWrite(12, HIGH);
      BT.println("LED 2 on");
    }

     if (a=='3')
    {
      digitalWrite(9, HIGH);
      BT.println("LED 3 on");
    }
     if (a=='4')
    {
      digitalWrite(13, LOW);
      BT.println("LED 1 off");
    }
    
    if (a=='5')
    {
      digitalWrite(12, LOW);
      BT.println("LED 2 off");
    }
     if (a=='6')
    {
      digitalWrite(9, LOW);
      BT.println("LED 3 off");
    }

  }
}
