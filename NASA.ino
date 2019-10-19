int x=0 , w=A5 , b= 2;


void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 x = analogRead(w);
  
 if (x>=100)
     digitalWrite(b,HIGH);
 else 
     digitalWrite(b,LOW);    
 
 }
