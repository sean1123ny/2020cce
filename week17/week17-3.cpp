void setup(){
  size(400,200);
  textSize(40);
}
char c='9';
int win=0;//0:還沒win, 1:win
void draw(){
  background(#BEA6F2);
  text( "Press:"+c, 100, 100);
  text("You :"+key, 100,150);
  if( c==key ) win=1;
  else win=0;
  
  if(win==1) text("You Win!", 100, 50);
}