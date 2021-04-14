#include <stdio.h>
#include <string.h>
char a[100][10];
int compare( const void* p1, const void* p2 ){
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	for (int i=0 ; i<n ; i++){
		scanf("%s", a[i]);
	}
		qsort(a, n, 10, s compare);
		
		for(int i=1 ; i<n ; i++){
			printf("%s", a[i]);
		}
	}