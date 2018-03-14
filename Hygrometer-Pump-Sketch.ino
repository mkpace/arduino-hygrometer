// sensor A0 - Hygrometer
int sensorPinA0 = 0;
// sensor A1 - Parastaltic pump
int motorPin = A1;

int pumpTime = 5000;
int waitTime = 10000;

void setup(){
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop(){
  int sensorValue = analogRead(sensorPinA0);
  Serial.println(sensorValue);
  delay(10);
  if(sensorValue > 900){
    digitalWrite(motorPin, HIGH);
    //delay(pumpTime);
    //delay(waitTime);
  } else {
    digitalWrite(motorPin, LOW);  
  }
}