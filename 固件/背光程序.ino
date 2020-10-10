/*键盘背光程序*/

#define on 100  //点亮时长
#define off 100 //熄灭时长
//调节以上两个数值可以实现不同亮度

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
}

void open(int a)
{
  digitalWrite(a, HIGH);
  delayMicroseconds(on);
  digitalWrite(a, LOW);
  delayMicroseconds(off);
}
void loop()
{
  for (int i = 2; i < 17; i++)
  {
    if (i == 11 || i == 12 || i == 13) continue;
    else open(i);
  }
}
