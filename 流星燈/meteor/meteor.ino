int pins[]={5,4,0,2,14,12,13,15,3,1};
#define len 10
void setup() {
  int i;
  for(i=0;i<len;i++)
  {
    pinMode(pins[i], OUTPUT);
    analogWrite(pins[i],0);
  }
}
//脫尾
// int lum[]={0,25,50,75,100,125,150,175,200,255};
int lum[]={255,200,150,75,22};
#define st 6
int k;
int j=0;
void light(int j)
{
  int temp=j;
  do
  {
    analogWrite(pins[j-temp],lum[temp]);
    temp--;
  }while(temp>=0);
}
void loop() {
    for(j=0;j<len;j++)//跑每顆燈
    {
      light(j);
      delay(150);
      int i;
      for(i=0;i<len;i++)
      {
        pinMode(pins[i], OUTPUT);
        analogWrite(pins[i],0);
      }
    }
  
}
