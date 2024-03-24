#define LED1 25 
#define freq 5000
#define channel 0
#define reslution 8 //8bit解析度
//做一個呼吸燈
void setup()
{
  ledcSetup(channel,freq,reslution);
  ledcAttachPin(LED1,channel);
}
void loop()
{
  for (int cy =0;cy<=255;cy++)
  {
    ledcWrite(channel,cy);
    delay(5);
  }
  for (int cy =255;cy>=0;cy--)
  {
    ledcWrite(channel,cy);
    delay(5);
  }
}