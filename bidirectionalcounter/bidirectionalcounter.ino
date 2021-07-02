#include <LiquidCrystal.h>
const int en = D0;
const int rs = D1;
LiquidCrystal lcd(rs,en,D3,D4,D5,D6);
#define in D8 //IR Sensor 1
#define out D7 //IR sensor 2
int count=0, pos=0;

void setup(){
    pinMode(in, INPUT);
    pinMode(out, INPUT);
    lcd.begin(16,2);
}
void loop(){

     /*
       Arrangement or placing of sensors: while entering the room from outside, sensor1 will be encounterd first and sensor2 will be next.
            
       If pos=0, default value; No person is entering/leaving the room
       If pos=1, person is entering the room and crossed sensor1 (in)
       If pos=2, person has entered the room after crossing both the sensors
       If pos=3, person is going out of the room and crossed the sensor2 (out)
       If pos=4, person has gone out of the room after crossing both the sensors
    */
    if((digitalRead(in))==0)
    {
      delay(20);
      while((digitalRead(in))==0);
        if(pos==0)
        pos=1;
        else if(pos==3)
        pos=4;
    }
    if((digitalRead(out))==0)
    {
        delay(20);
        while((digitalRead(out))==0);
        if(pos==1)
          pos=2;
        else if(pos==0)
          pos=3;
    }
    if(pos==2)
    {
        count++; //person has entered the room, increment the count
        displayCount();
        pos=0;
    }
    else if(pos==4 && count!=0){
    count--; //person has left the room, decrement the count
    displayCount();
    pos=0;
    }
    delay(50);
}
void displayCount()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(count);
}
