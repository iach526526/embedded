# 數位輸入輸出
數位只有HIGH/LOW兩種信號可以控制，對於LED訊號來說就是亮或不亮而已。
在ESP32的程式碼中，可以這樣設定:
### 設定Pin角模式
把PinNum角設定成OUTPUT/INPUT
```c
pinMode(PinNum,MODE)
```
### 輸出
把角位的輸出設定成高態或低態
```c
digitalWrite(PinNum,HIGH/LOW)
```
### 數位輸入
從PinNum角讀取輸入的狀態(0或1)，把回傳值是布林值
```c
bool ret=digitalRead(PinNum)
```
