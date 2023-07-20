//int ena = 5;
//int in1 = 9;
//int in2 = 10;
int in3 = 5;
int in4 = 6;

void setup() {

  //pinMode(ena, OUTPUT);
  //pinMode(in1, OUTPUT);
  //pinMode(in2, OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

  //CLOCKWISE MAX SPEED
  //analogWrite(in1,255);
  //digitalWrite(in2,LOW);
  analogWrite(in3,255);
  digitalWrite(in4,LOW);
  //analogWrite(ena, 255);
  delay(2000);
  
  //STOP
  //digitalWrite(in1,LOW);
  //digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(2000);

  //COUNTERCLOCKWISE MAX SPEED
  //digitalWrite(in1,LOW);
  //analogWrite(in2,255);
  digitalWrite(in3,LOW);
  analogWrite(in4,255);
  //analogWrite(ena, 255);
  delay(2000);

  //STOP
  //digitalWrite(in1,LOW);
  //digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(2000);

  //CLOCKWISE HALF SPEED
  //analogWrite(in1,200);
  //digitalWrite(in2,LOW);
  analogWrite(in3,200);
  digitalWrite(in4,LOW);
  //analogWrite(ena, 127);
  delay(2000);

  //STOP
  //digitalWrite(in1,LOW);
  //digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  delay(2000);

  //COUNTERCLOCKWISE MAX SPEED
  //digitalWrite(in1,LOW);
  //analogWrite(in2,200);
  digitalWrite(in3,LOW);
  analogWrite(in4,200);  
  //analogWrite(ena, 127);
  delay(2000);

  //STOP
  //digitalWrite(in1,LOW);
  //digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  
}

void loop() {

 
}