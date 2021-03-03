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