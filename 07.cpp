#include<stdio.h>
int main()
{
	int a[10], k=0;
	for(int i=0 ; i<10 ; i++){
		scanf("%d", &a[i]);
		if(a[i]%3==0){
		k++;
		}
	}
	printf("%d\n", k);
}
