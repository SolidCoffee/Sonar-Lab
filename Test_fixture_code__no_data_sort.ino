int trigPin=12;
int echoPin=11;
long TravelTime;
long Speedofsound;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
float ext=pow(10,-6);
digitalWrite(trigPin,LOW);
delay(500);
digitalWrite(trigPin,HIGH);
delay(500);
digitalWrite(trigPin,LOW);
TravelTime=pulseIn(echoPin,HIGH);
Speedofsound=43/(TravelTime*ext);
  Serial.println(Speedofsound);
  //Serial.println(TravelTime);
  //Serial.println(ext);
}
