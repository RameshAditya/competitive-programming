#include<bits/stdc++.h>
using namespace std;
int dp[200][200];
int t;
char s1[105],s2[105];
int main(){
	scanf("%d",&t);
	for(int caseno=1;caseno<=t;caseno++){
		scanf("%s",s1);
		for(int i=0;i<strlen(s1);i++)s2[strlen(s1)-i-1]=s1[i];
		s2[strlen(s1)]='\0';
		//printf("S2:%s\n",s2);
		for(int i=0;i<=strlen(s1);i++){
			for(int j=0;j<=strlen(s2);j++){
				if(!i || !j)dp[i][j]=0;
				else if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
				else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
		printf("Case %d: %d\n",caseno, strlen(s1)-dp[strlen(s1)][strlen(s2)]);
	}
}
