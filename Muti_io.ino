int potPin1 = A0;     
int potPin2 = A1;     
int ledPin1 = 8;      
int ledPin2 = 9;      

int potValue1 = 0;    
int potValue2 = 0;    

void setup() {
  pinMode(ledPin1, OUTPUT);  
  pinMode(ledPin2, OUTPUT);
  // Serial.begin(9600);  
}

void loop() {
  potValue1 = analogRead(potPin1);   
  potValue2 = analogRead(potPin2);  

  // Serial.println("Pot1: ");
  // Serial.println(potValue1);
  // Serial.println("   Pot2: ");
  // Serial.println(potValue2);
  // delay(100);

  int brightness1 = map(potValue1, 0, 1023, 0, 255);
  int brightness2 = map(potValue2, 0, 1023, 0, 255);

  analogWrite(ledPin1, 255);  
  analogWrite(ledPin2, 255);  
}