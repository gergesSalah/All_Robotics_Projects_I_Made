void setup() {
  //pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {

  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  //analogWrite(10,255);
  delay(1000);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  //analogWrite(10,255);
  delay(1000);
}
