int []a = new int[47];//Java的陣列
//int []a={1,2,3,4,5,6,7,8,9....45,46};
void setup(){
  size(500,200);
  textSize(30);
  for(int i=0 ; i<47 ; i++) a[i] = i;
  //讓 a[i]的陣列裡, 要放整齊對應的數字
  for(int i=0 ; i<1000 ; i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }//作弊,先洗好牌,先知道得獎號碼,等下再掉出來
}
void draw(){
  background(#23CBA0);
  for( int i=0 ; i<5 ; i++){
    text( a[i], i*80, 100);
  }
}