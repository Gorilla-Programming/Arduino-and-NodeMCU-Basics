int a = 5;
int b = 6;
void setup() {

  Serial.begin(9600);
  
}

void loop() {

  Serial.println("Sum : ");
  Serial.println(a+b);
  Serial.println("Difference : "); 
  Serial.println(a-b); 
  Serial.println("Multiplication : "); 
  Serial.println(a*b); 
  Serial.println("Division : "); 
  Serial.println(a/b); 
  delay(10000);
  
}
