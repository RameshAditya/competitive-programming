#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[500],b[500];
	scanf("%s %s",a,b);
	int dp[500][500];
	printf("Len a=%d and b=%d\n",strlen(a),strlen(b));
	for(int i=0;i<=strlen(a);i++)
		for(int j=0;j<=strlen(b);j++){
			if(!j)dp[i][j]=i;
			else if(!i)dp[i][j]=j;
			else if(a[i]==b[j])dp[i][j]=1+dp[i-1][j-1];
			else dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
		}
	printf("Res:%d\n",dp[strlen(a)][strlen(b)]);
	}
	
