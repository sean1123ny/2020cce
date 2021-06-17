void setup(){
  size(400,200);
  textSize(40);
}
float x=100, y=100, vx=0, vy=0;
void draw(){
  background(#3E6738);
  rect(x,y,50,50);//畫方塊
  x += vx;//每秒60次，等速、順
  y += vy;
}//Q:需求,左鍵、右鍵

void keyPressed(){
  if( keyCode==LEFT ) vx=-1; 
  if( keyCode==RIGHT ) vx=+1;
  if( keyCode==UP ) vy=-1;
  if( keyCode==DOWN ) vy=+1;
}