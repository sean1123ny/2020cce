void setup(){//只做一次的設定
  size(1024, 400);
}
void draw(){//互動版本,每秒畫60次
  if( mousePressed ) background(255, 0, 255);//按下去時 紫色
  else background( 52, 141, 247 );//否則 淡藍色
}