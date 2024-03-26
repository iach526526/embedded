#define red 14
#define green 25
#define blue 12
#define wait 5
void add(int color)
{
  int i;
  for(i=255;i>0;i--)
  {
    analogWrite(color,i);
    delay(5);
  }
}
void remove(int color)
{
  //去掉
  int i;
  for(i=0;i<255;i++)
  {
    analogWrite(color,i);
    delay(5);
  }
}
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  analogWrite(green,255);
  analogWrite(blue,255);
  analogWrite(red,255);
}
//白黃青
void loop() {
  add(red);add(green);add(blue);

  delay(wait);

  remove(blue);

  delay(wait);

  remove(red);
  add(blue);

}
