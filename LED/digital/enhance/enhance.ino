#define LED1 15
#define LED2 2
#define LED3 0
#define LED4 4
#define LED5 5
int LEDs[]={LED1,LED2,LED3,LED4,LED5};
void setup() {
  Serial.begin(9600);
  int i;
  for(i=0;i<5;i++)
  {
    pinMode(LEDs[i],OUTPUT);
  }
  
}
int sensor;
void clear()
{
  Serial.println("clear");
  short int i;
  for(i=0;i<5;i++)
  {
    digitalWrite(LEDs[i],LOW);
  }
}
int deltaS=-1;
void loop() {
  // put your main code here, to run repeatedly:
  sensor=analogRead(13);
  sensor = map(sensor,0,4095,0,5);
  Serial.println(sensor);
  if (deltaS!=sensor)
  {
    deltaS=sensor;//update
    clear();
    short int i;
    for(i=0;i<sensor;i++)
    {
    digitalWrite(LEDs[i],HIGH);
    }
  }
  delay(150);
}
