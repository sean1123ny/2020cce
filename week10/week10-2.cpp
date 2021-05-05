#include <stdio.h>
char line[10000];
int ans[26];
int main()
{
	int n;
	scanf("%d\n", &n);

	for(int i=0 ; i<n ; i++){
		gets(line);

		for(int k=0 ; line[k]!=0 ; k++){
			char c= line[k];

			if( c>='A' && c<='Z') printf("大");
			else if( c>='s' && c<='z') printf("小");
			else printf("他");
		}
	}
}