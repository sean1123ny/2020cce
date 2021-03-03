# 2020cce

# 第一周實習課程式
## 第一題 進階題：分式化簡 
```c
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i=10000 ; i>1 ; i--){
		if(a%i==0 && b%i==0){
			printf("%d %d\n", a/i, b/i);
			break;
		}
	}
}
```
## 第二題 進階題：讀入整數反序列印
```c
#include<stdio.h>
int main()
{
	int a[10];
	for(int i=0 ; i<10 ; i++){
		scanf("%d", &a[i]);
	}
	for(int k=9 ; k>=0 ; k--){
		if(a[k]>0 && a[k]<=1000){
			printf("%d ", a[k]);
		}
	}
	printf("\n");
}
```
## 第三題 進階題：A的B次方函數 
```c
#include<stdio.h>
int main()
{
	int a[10];
	for(int i=0 ; i<10 ; i++){
		scanf("%d", &a[i]);
	}
	for(int k=9 ; k>=0 ; k--){
		if(a[k]>0 && a[k]<=1000){
			printf("%d ", a[k]);
		}
	}
	printf("\n");
}
```
## 第四題 進階題：漸增數列相加 
```c
#include<stdio.h>
int main()
{
	int a, ans=0;
	scanf("%d", &a);
	for(int i=1 ; i<a ; i++){
		ans+=i*(i+1);
	}
	printf("%d\n", ans);
}
```
## 第五題 基礎題：找零錢
```c
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d", &a);
	b = a/50;
	c = a%50/5;
	d = a%50%5;
	printf("%d=50*%d+5*%d+1*%d\n", a, b, c, d);
}
```
## 第六題 基礎題：因數個數 
```c
#include<stdio.h>
int  main()
{
	int a, k=0;
	scanf("%d", &a);
	for(int i=1 ; i<=a ; i++){
		if(a%i==0){
			k++;
		}
	}
	printf("%d\n", k);
}
```
## 第七題 基礎題：找倍數
```c
#include<stdio.h>
int  main()
{
	int a, k=0;
	scanf("%d", &a);
	for(int i=1 ; i<=a ; i++){
		if(a%i==0){
			k++;
		}
	}
	printf("%d\n", k);
}
```
## 第八題 基礎題：整數轉換為等級 
```c
#include<stdio.h>
int  main()
{
	int a, k=0;
	scanf("%d", &a);
	for(int i=1 ; i<=a ; i++){
		if(a%i==0){
			k++;
		}
	}
	printf("%d\n", k);
}
```
