void setup(){//設定只做一次
  size(400,200);
  textSize(40);
}
String line="hello";//字串
void draw(){//每秒60次
  background(#BEA6F2) ;
  text( line, 100, 100);//可以將字串line畫出來
  text("World", 100,150);//也可以把字串畫出來
  
  
}