# 進階PWM指令

esp32有16個PWM獨立通道(0~15)，可以分別設定不同屬性的PWM信號

設定通道屬性>指定Pin角輸出>更改PWM工作時間
## 設定重點
- PWM通道
- 頻率
    單位HZ，一般使用5000Hz
- 解析度
    工作週期解析度，可設定1~16，代表2的冪次，使用8就是使用2^8作為解析度，0最小，255最大
### 設定通道屬性
```c
ledcSetup(PwmChannel,freq,resolution); //PWM通道,頻率,解析度
```
### 將通道綁定GPIO接角
```c
ledcAttachPin(PinNum,channel); //編號,通道
```
### 輸出
```c
ledcWrite(PinNum,dutyCycle); //,工作週期(0~255)