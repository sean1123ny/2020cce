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