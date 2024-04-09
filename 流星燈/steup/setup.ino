//迴圈版本前的構想
int pins[]={21,19,18,5};
#define len 4
void setup() {
  int i;
  for(i=0;i<=len;i++)
  {
    pinMode(pins[i], OUTPUT);
    analogWrite(pins[i],0);
  }
}
// int lum[]={0,25,50,75,100,125,150,175,200,255};
int lum[]={255,2,0,0};
#define st 4
int k;
int j=0;
void loop() {
    for(j=0;j<len;j++)//跑每顆燈
    {
        
        switch(j)
        {
          case 0:
            analogWrite(pins[j],lum[j]);
            break;
          case 1:
            analogWrite(pins[j-1],lum[j]);
            analogWrite(pins[j],lum[j-1]);
            break;
          case 2:
            analogWrite(pins[j-2],lum[j]);
            analogWrite(pins[j-1],lum[j-1]);
            analogWrite(pins[j],lum[j-2]);
            break;
          case 3:
            analogWrite(pins[j-3],lum[j]);
            analogWrite(pins[j-2],lum[j-1]);
            analogWrite(pins[j-1],lum[j-2]);
            analogWrite(pins[j],lum[j-3]);
            break;
        }
      delay(500);
      int i;
  for(i=0;i<=len;i++)
  {
    pinMode(pins[i], OUTPUT);
    analogWrite(pins[i],0);
  }
    }
  
}
