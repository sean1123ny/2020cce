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
