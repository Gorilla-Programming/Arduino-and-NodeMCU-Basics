int table[10][7] = {{ 0,0,0,0,0,0,1 },{ 1,0,0,1,1,1,1 },{ 0,0,1,0,0,1,0 },{ 0,0,0,0,1,1,0 },{ 1,0,0,1,1,0,0 },{ 0,1,0,0,1,0,0 },{ 0,1,0,0,0,0,0 },{ 0,0,0,1,1,1,1 },{ 0,0,0,0,0,0,0 },{ 0,0,0,0,1,0,0 }};  

void setup() 
{ 
  int a[7]={2,3,4,5,6,7,8};
  for(int i=0;i<7;i++)
  {
    pinMode(a[i], OUTPUT);   
    digitalWrite(a[i],1);
  }
}

void loop() 
{
  delay(1000);
  for (int i = 0; i < 10; i++) 
  {
   int pin= 2;
    for (int j=0; j < 7; j++) 
    {
      digitalWrite(pin, table[i][j]);
      pin++;
    } 
    delay(2000);
  }
  delay(2000);
}
 
