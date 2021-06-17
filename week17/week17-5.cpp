void setup(){
  size(400,200);
  textSize(40);
}
int x=100, y=100;
void draw(){
  background(#3E6738);
  rect(x,y,50,50);//畫方塊
}//Q:需求,左鍵、右鍵

void keyPressed(){
  if( keyCode==LEFT ) x-=10; 
  if( keyCode==RIGHT ) x+=10;
  if( keyCode==UP ) y-=10;
  if( keyCode==DOWN ) y+=10;
}