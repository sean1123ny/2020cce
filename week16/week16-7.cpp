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