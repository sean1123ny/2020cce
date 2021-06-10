```c
void setup(){//設定,只做一次
  size(400,200);
}
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  ellipse(50,50, 80,80);
      //    圓心  寬,高
}
```

```c
void setup(){//設定,只做一次
  size(400,200);
}
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  fill(255);
  ellipse(50,50, 80,80);
      //    圓心  寬,高
  fill(255,0,0);
  float stop=mouseX/50.0;
  text( stop, 100,100);//畫出字
  arc(50,50, 80,80, 0, stop);//畫出 圓弧
}//   圖心   寬,高 開始 結束
```

```c
void setup(){//設定,只做一次
  size(400,200);
}
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  fill(255);
  ellipse(50,50, 80,80);
      //    圓心  寬,高
  fill(255,0,0);
  float start=mouseX/50.0;
  textSize(40);
  text( start, 100,100);
  arc(50,50, 80,80, 0+start, 0.1+start);//畫出 圓弧
}//   圖心   寬,高 開始 結束
```

```c
void setup(){//設定,只做一次
  size(400,200); 
}
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  fill(255);
  ellipse(100,100, 180,180);
      //    圓心    寬, 高
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0 ; i<24 ; i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#A91DF0);
    if(i%3==2) fill(255);
    arc(100,100, 180,180, shift+0+start, shift+PI/12+start);//畫出 圓弧
  }//     圖心    寬,高     開始           結束
}
```

```c
void setup(){//設定,只做一次
  size(400,200); 
}
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  fill(255);
  ellipse(100,100, 180,180);
      //    圓心    寬, 高
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0 ; i<24 ; i++){
    float shift=i*PI/12;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#A91DF0);
    if(i%3==2) fill(255);
    if(i==0) fill(#E02312);
    arc(100,100, 180,180, shift+0+start, shift+PI/12+start);//畫出 圓弧
  }//     圖心    寬,高     開始           結束
}
```

```c
void setup(){//設定,只做一次
  size(400,200); 
}
float start=0;
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  if(start<10) start+=0.01;//float start=mouseX/50.0;
  fill(255); text( start, 200,150);
  for(int i=0 ; i<24 ; i++){
    float shift=i*PI/12;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#A91DF0);
    if(i%3==2) fill(255);
    if(i==0) fill(#E02312);
    arc(100,100, 180,180, shift+0+start, shift+PI/12+start);//畫出 圓弧
  }//     圖心    寬,高     開始           結束
}
```

```c
void setup(){//設定,只做一次
  size(400,200); 
}
float start=0, v=0.07;
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  if(v > 0.001){//速度很慢時, 就不要再轉動了
    start += v;//位置、速度、加速度  (位置 會加上 速度)
    v *= 0.99;//摩擦力,會讓速度變慢, 位置、速度、加速度
  }  //if(start<10) start+=0.01;//float start=mouseX/50.0;
  fill(255); text( start, 200,150); text( v, 200, 170);
  for(int i=0 ; i<24 ; i++){
    float shift=i*PI/12;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#A91DF0);
    if(i%3==2) fill(255);
    if(i==0) fill(#E02312);
    arc(100,100, 180,180, shift+0+start, shift+PI/12+start);//畫出 圓弧
  }//     圖心    寬,高     開始           結束
}
```

```c
void setup(){//設定,只做一次
  size(400,200); 
}
float start=0, v;//v是旋轉的速度
void mousePressed(){
  v = random(1); 
}
void draw(){//畫,每秒畫60次
  background(#7AE81C);
  if(v > 0.001){//速度很慢時, 就不要再轉動了
    start += v;//位置、速度、加速度  (位置 會加上 速度)
    v *= 0.99;//摩擦力,會讓速度變慢, 位置、速度、加速度
  }  //if(start<10) start+=0.01;//float start=mouseX/50.0;
  fill(255); text( start, 200,150); text( v, 200, 170);
  for(int i=0 ; i<24 ; i++){
    float shift=i*PI/12;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#A91DF0);
    if(i%3==2) fill(255);
    if(i==0) fill(#E02312);
    arc(100,100, 180,180, shift+0+start, shift+PI/12+start);//畫出 圓弧
  }//     圖心    寬,高     開始           結束
}
```
