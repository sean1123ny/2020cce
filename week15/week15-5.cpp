import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//大字
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  int s = second();//s增加 0...59
  background(58,114,191);
  //text( 59-s, 100,100);//59...減少
  text( 10 - s%11, 100,100);
  if( 10-s%11 == 0 && !player.isPlaying() ){
    player.play(); 
  }
}  //        0...10=>  10...0
// 10,9,8,7,...3,2,1,0 共 11數字