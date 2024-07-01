int last;
int sensorval;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorval = analogRead(A0);
if(sensorval != last)
{
  Serial.println(sensorval);
}
last = sensorval;


}
