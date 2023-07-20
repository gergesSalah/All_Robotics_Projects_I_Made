int TemIN = A2;
int motorOut1 = 6;
int motorOut2 = 5;

int pirPin = 8;
int ledPin1 = 12;
int ledPin2 = 13;
int sensorInput;
int temp;
int dc;
int pirsensor;
void setup()
{
  pinMode(TemIN, INPUT);
  pinMode(motorOut1,OUTPUT);
  pinMode(motorOut2,OUTPUT);
  pinMode(pirPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop()
{
  sensorInput = analogRead(TemIN);
  temp = map(sensorInput,20,358,-40,125);
  pirsensor = digitalRead(pirPin);
  
  if(temp<20)
  {
    digitalWrite(motorOut1,LOW);
    digitalWrite(motorOut2,LOW);
  }
  else if(temp == 20)
  {
    analogWrite(motorOut1,128);
    digitalWrite(motorOut2,LOW);
  }
  else if(temp>20&&temp<40)
  {
    dc = map(temp,-40,125,0,255);
    analogWrite(motorOut1,dc);
    digitalWrite(motorOut2,LOW);
  }
  else if(temp>40)
  {
	analogWrite(motorOut1,255);
    digitalWrite(motorOut2,LOW);
  }
  
  if (pirsensor == 1) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
}











