```c
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
```

```c
void setup(){//設定只做一次
  size(400,200);
  textSize(40);
}
String line="hello";//字串
char c='9';
void draw(){//每秒60次
  background(#BEA6F2);
  text( line+c+100, 100, 100);//可以將字串line畫出來
  text("World:"+key, 100,150);//也可以把字串畫出來
}//在這裡我們發現,字串的+ 其實是越接越長!!!
// key 會對應你最後按下的鍵盤的鍵(字母、數、符號)
```

```c
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
```

```c
void setup(){
  size(400,200);
  textSize(40);
}
char c='9';
String ans="abcdefghijklmnopqrsruvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//Java的字串
int win=0;//0:還沒win, 1:win
void draw(){
  background(#BEA6F2);
  text( "Press:"+c, 100, 100);
  text("You :"+key, 100,150);
  if( c==key ) win=1;
  else win=0;
  
  if(win==1){
    text("You Win!", 100, 50);
    int i = int(random(26+26));
    c = ans.charAt(i);
  }
}
```

```c
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
```

```c
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
```

```c
String A="mother";
String line="";

void setup(){
  size(400,300);
  textSize(40);
}
void draw(){
  background(0);
  text( A, 100,100);
  text(line + "|", 100, 150);
}
void keyPressed(){
  line = line + key; 
}
```

```c
String A="mother";
String line="";

void setup(){
  size(400,300);
  textSize(40);
}
void draw(){
  background(0);
  text( A, 100,100);
  text(line + "|", 100, 150);
}
void keyPressed(){
  int len = line.length();//原字的長度
  if( key>='a' && key<='z')line = line + key;//小寫鍵
  if( key>='A' && key<='Z')line = line + key;//大寫鍵
  if( key==ENTER){    }//比對字是否正確
  if( key==BACKSPACE && len>0) line = line.substring(0, len-1);//倒退刪掉!!
}//Q:如何把倒退的字，倒退刪掉!!A:判斷 BACKSPACE 時，要把 Line變短
```
