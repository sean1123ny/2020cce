```c
#include <stdio.h>
char line[2000];
int main()
{
	for (int t=0 ; gets(line) ; t++){
		int ans[256]={};
		char ascii[256];
		for( int i=0 ; i<256 ; i++) ascii[i]=i;
		
		for( int i=0 ; line[i]!=0 ; i++){
			char c= line[i];
			ans[c]++;
		}
		
		for(int i=0 ; i<256 ; i++){
			for(int j=i+1 ; j<256 ; j++){
				if( ans[i] > ans[j] ){
					int temp=ans[i];
					ans[i]=ans[j]
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c
				}
			}
		}
		if( t>0 ) printf("\n");
		for( int i=0 ; i<256 ; i++){
			if(ans[i]>0) printf("%d %d\n", ascii[i], ans[i]);
		}
	}
}
```
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d", &T)'
	for( int t=0 ; t<T ; t++){
		
		int N;
		scanf("%d",&N);
		for(int i=0 ; i<N ; i++){
			scanf("%d", &a[i]);
		}
		
		int ans=0;
		
		printf("Qptimal train swapping takes %d swaps.\n", ans);
	}
}
```

```c
#include <stdio.h>
int a[100];
int main()
{
	int T, N;
	scanf("%d", &T);
	for( int t=0 ; t<T ; t++){
		scanf("%d",&N);
		for(int i=0 ; i<N; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0 ; i<N ; i++){
			scanf("%d", &a[i]);
		}
		int ans=0;
		for(int k=0 ; k<N-1 ; k++){
			for (int i=0 ; i<N-1; i++){
				if( a[i] > a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}
```c
#include <stdio.h>
char line[2000];
int main()
{
	for (int t=0 ; gets(line) ; t++){
		int ans[256]={};
		char ascii[256];
		for( int i=0 ; i<256 ; i++) ascii[i]=i;
		
		for( int i=0 ; line[i]!=0 ; i++){
			char c= line[i];
			ans[c]++;
		}
		
		for(int i=0 ; i<256 ; i++){
			for(int j=i+1 ; j<256 ; j++){
				if( ans[i] > ans[j] ){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
				if( ans[i] == ans[j] && ascii[i]<ascii[j] ){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}
		if( t>0 ) printf("\n");
		for( int i=0 ; i<256 ; i++){
			if(ans[i]>0) printf("%d %d\n", ascii[i], ans[i]);
		}
	}
}
```

```c
#include <stdio.h>
int a[100];
int main()
{
	int T, N;
	scanf("%d", &T);
	for( int t=0 ; t<T ; t++){
		scanf("%d",&N);
		for(int i=0 ; i<N; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0 ; i<N ; i++){
			scanf("%d", &a[i]);
		}
		int ans=0;
		for(int k=0 ; k<N-1 ; k++){
			for (int i=0 ; i<N-1; i++){
				if( a[i] > a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}
```

```c
#include <stdio.h>
int a[10000];
int main()
{
	int N, M;
	while( scanf("%d %d", &N, &M)==2){
		for(int i=0 ; i<N ; i++){
			scanf("%d", &a[i] );
		}
		
		printf("%d %d\n", N, M);
		for(int i=0 ; i<N ; i++){
			printf("%d\n", a[i]); 
		}
	}
}
```

```c
#include <stdio.h>
int a[10000];
void swap( int i, int j){
	int temp =a[i];
	a[i] = a[j];
	a[j] = temp;
}
int main()
{
	int N, M;
	while( scanf("%d %d", &N, &M)==2){
		for(int i=0 ; i<N ; i++){
			scanf("%d", &a[i] );
		}
		for(int i=0 ; i<N ; i++){
			for (int j=i+1 ; j<N ; j++){
				if (a[i]%M > a[j]%M) swap(i, j);
				if (a[i]%M ==a[j]%M && a[i] %2==0 && a[j]%2!=0) swap(i, j);
				if (a[i]%M ==a[j]%M && a[i] %2!=0 && a[j]%2!=0 && a[i]<a[j]) swap(i, j);
				if (a[i]%M ==a[j]%M && a[i] %2==0 && a[j]%2==0 && a[i]>a[j]) swap(i, j);
			}	
		}
		
		printf("%d %d\n", N, M);
		for(int i=0 ; i<N ; i++){
			printf("%d\n", a[i]); 
		}
	}
}
```
