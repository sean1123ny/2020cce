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