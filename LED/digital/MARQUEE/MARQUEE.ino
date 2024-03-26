#define red 12
#define green 14
#define yee 27
#define blue 26
#define white 25

int Pins[]={red,green,yee,blue,white};
void setup() {
  int j=0;
  while(j<=4)
  {
    pinMode(Pins[j],OUTPUT);
    j++;
  }
}

void loop() {
  for(int i=0;i<=4;i++)
  {
    digitalWrite(Pins[i],HIGH);
    delay(500);
    digitalWrite(Pins[i],LOW);

  }
  delay(50);
  for(int i=4;i>=0;i--)
  {
    digitalWrite(Pins[i],HIGH);
    delay(250);
    digitalWrite(Pins[i],LOW);
  }
}
