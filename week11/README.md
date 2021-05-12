```c
#include<stdio.h>
unsigned char c;
typedef unsigned char unchar;
unchar d;
int main()
{
    c='A';
    d = c;
    printf("%c", d);
}
```
```c
#include<stdio.h>
typedef struct data{
    char c;
    int ans;
} DATA;
///struct data listA;
DATA listA;

int main()
{
    listA.c = 'A';
    listA.ans=1;

    printf("%c %d\n", listA.c, listA.ans );

}
```

```c
#include<stdio.h>
#include<stdlib.h>
int compare( const void*p1, const void*p2)
{
    int d1 = ( (int)p1 );
    int d2 = ( (int)p2 );
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10] = {4,8,3,7,5,2,9,1,6,10};
int main()
{
    qsort ( a, 10, sizeof(int), compare);
    for( int i=0 ; i<10 ; i++){
        printf("%d ", a[i] );
    }
}
```

```c
#include <stdio.h>
char line [2000]; //其實[1001]就可以了
int ans[256];//統計出現的次數, ex. ans[65] 代表 必65個字母出現次數
int main()
{
	//迴圈
	//step01: Input 一次1行, 100字母 (Q:不知道有幾行)
				//一次1行: 成功時有指標,失敗變NULL
	for(int t=0; gets(line)!=NULL ; t++){
		//step5:把資料清空
		for( int i=0 ; i<256 ; i++) ans[i]=0;
		
		//step3: 在一行中,每個字母慢慢分析
		for( int i=0 ; line[i]!=0 ; i++){
			char c=line[i];
			ans[c]++;//這個字母++
		}
		
		//欠 排序
		
		if(t>0) printf("\n");//step02:跳行問題
		
		for(int i=0 ; i<256 ; i++){
			if(ans[i]>0) printf("%d %d\n", i, ans[i]);
		}
		
	}//奇怪的迴圈
}
```
