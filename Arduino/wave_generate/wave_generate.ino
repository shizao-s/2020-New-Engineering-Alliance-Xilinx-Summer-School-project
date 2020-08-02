//定义8位R2R DA输出的对应值
int wavedigital[255];
//定义图形周期
//int cycle;
//波形模式切换按键
//const int button = A8;
//波形常数
volatile int wave = 0;
void setup() {
  Serial.begin(9600);
  //输出端口
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(A6,OUTPUT);
  pinMode(A7,OUTPUT);

  //改变输出信号频率调整完电位器后复位后生效 
  //cycle = int(analogRead(A12)/10)+1;
  wagegen();
}

void loop() {
  /*if(digitalRead(button)==1)
  {
    waveSelect();
  }*/
  for(int i=0;i<255;i++)
  {
    Serial.println( wavedigital[i]);
 //   trans(wavedigital[i]);
//    PORTD = wavedigital[i]; 
    //调试各个波形的值
 
    //调试波形周期
    delay(100);
    delayMicroseconds(1000);
  }
}
//十进制转换成二进制输出
/*
void trans(int wd)//wd:wavedigital
{
  int Num=2;
  int a[8];
  int i=1,j;
  int temp;
  temp  = wd;
  for(j=0;j<8;j++)
  {
    i=temp%Num;
    temp=temp/Num; 
    a[j]=i;
  }
 // for(j=7;j>=0;j--)
 // {
    if(a[7]==0){digitalWrite(A7,LOW);}
    else{digitalWrite(A7,HIGH);}
    if(a[6]==0){digitalWrite(A6,LOW);}
    else{ digitalWrite(A6,HIGH);}
    if(a[5]==0){digitalWrite(A5,LOW);}
    else{ digitalWrite(A5,HIGH);}
    if(a[4]==0){digitalWrite(A4,LOW);}
    else{ digitalWrite(A4,HIGH);}
    if(a[3]==0){digitalWrite(A3,LOW);}
    else{ digitalWrite(A3,HIGH);}
    if(a[2]==0){digitalWrite(A2,LOW);}
    else{ digitalWrite(A2,HIGH);}
    if(a[1]==0){digitalWrite(A1,LOW);}
    else{ digitalWrite(A1,HIGH);} 
    if(a[0]==0){digitalWrite(A0,LOW);}
    else{ digitalWrite(A0,HIGH);}
//  }
}*/
//波形选择程序
/*
void waveSelect(){
  //0-正弦波，1-三角波，2-锯齿波，3-矩形波
  wave++;
  if(wave == 4)
  {
    wave = 0;
  }
  wagegen();
  delay(3000);
}*/

//波形数值生成
void wagegen()
{
  float x;
  float y;

  //正弦波
  if(wave == 0)
  {
    for(int i=0;i<255;i++)
    {
      x = float(i);
      y = sin((x/255)*2*PI);
      wavedigital[i] = int(y*128)+128;
     // delayMicroseconds(10);
    }
  }

  //三角波
  
  if(wave == 1)
  {
    for(int i=0;i<128;i++)
    {
      x = float(i);
      wavedigital[i] = int(2*x);
    }
    for(int i=128;i<255;i++)
    {
      x = float(i);
      wavedigital[i] = 255-int((x-128)*2);
    }
  }

  //锯齿波
  if(wave==2)
  {
    for(int i=0;i<255;i++)
    {
      x = float(i);
      wavedigital[i]=x;
    }
  }

  //方波
  if(wave == 3)
  {
    for(int i=0;i<128;i++)
    {
      wavedigital[i] = 255;
    }
    for(int i=128;i<255;i++)
    {
      wavedigital[i]=0;
    }
  }
}
  
