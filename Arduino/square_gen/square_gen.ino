void setup() {
pinMode(A0,OUTPUT);
}

void loop() {
digitalWrite(A0,HIGH);
delayMicroseconds(1000); //
digitalWrite(A0,LOW);
delayMicroseconds(3000-1000);
}
/*
void setup() {
  // put your setup code here, to run once:
pinMode(A0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(A0,HIGH);
delay(500);  
digitalWrite(A0,LOW);
delay(500); 
}*/
