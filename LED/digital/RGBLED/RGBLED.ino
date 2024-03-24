#define red 12
#define green 13

#define blue 14

//共陽RGB
int Pins[]={red,green,blue};
void setup() {
  // put your setup code here, to run once:
  int j=0;
  while(j<=2)
  {
    pinMode(Pins[j],OUTPUT);
    digitalWrite(Pins[j],HIGH);
    j++;
  }
}

void loop() {

  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(500);
  digitalWrite(green,HIGH);
  digitalWrite(red,HIGH);
  delay(1000);

  digitalWrite(red,LOW);
  delay(500);
  digitalWrite(red,HIGH);
  delay(1000);

  digitalWrite(blue,LOW);
  delay(500);
  digitalWrite(blue,HIGH);
  delay(1000);
}
