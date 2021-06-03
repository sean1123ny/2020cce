```c
void setup(){//設定只做一次
  size(400,200); 
}
void draw(){//畫圖，每秒60frame
  int s = second();//0.59秒
  if( s%2==0 ) background(255,0,0);
  else background(58,114,191);
}
```

```c
void setup(){
  size(400,200);
  textSize(40);//大字
}
void draw(){
  int s = second();//s增加 0...59
  background(58,114,191);
  //text( 59-s, 100,100);//59...減少
  text( 10 - s%11, 100,100);
}  //        0...10=>  10...0
// 10,9,8,7,...3,2,1,0 共 11數字
```

```c
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  background(51,114,191); 
}
void mousePressed(){
  player.play(); 
}
```

```c
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "bell.mp3");
}
void draw(){
  background(51,114,191); 
}
void mousePressed(){
  if( player.isPlaying() ){
    player.stop(); 
  }else{
    player.play();
  }
}
```

```c
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
```

```c
function setup(){
  createCanvas(400,200); 
}
function draw(){
  let s = secend();
  if( s%2==0 ){
    background(255,0,0); 
  }else(){
    background(58,114,191); 
  }
}
```
