const int lf= 10;
const int lb= 9;
const int rf= 8;
const int rb= 7;
const int pwm=3;
void setup()
{
pinMode(lf,OUTPUT);
pinMode(lb,OUTPUT);
pinMode(rf,OUTPUT);
pinMode(rb,OUTPUT);
pinMode(pwm,OUTPUT);
}

void loop()
{
//forward in full speed
digitalWrite(lf,HIGH);
digitalWrite(lb,LOW);
digitalWrite(rf,HIGH);
digitalWrite(rb,LOW);
analogWrite(pwm,100);
delay(10000);

//reverse in half speed
digitalWrite(lf,LOW);
digitalWrite(lb,HIGH);
digitalWrite(rf,LOW);
digitalWrite(rb,HIGH);
analogWrite(pwm,175);
delay(10000);

//turn left in speed of 25%
digitalWrite(lf,LOW);
digitalWrite(lb,LOW);
digitalWrite(rf,HIGH);
digitalWrite(rb,LOW);
analogWrite(pwm,64);
delay(10000);

//turn right in speed of 75%
digitalWrite(lf,HIGH);
digitalWrite(lb,LOW);
digitalWrite(rf,LOW);
digitalWrite(rb,LOW);
analogWrite(pwm,191);
delay(10000);
}
