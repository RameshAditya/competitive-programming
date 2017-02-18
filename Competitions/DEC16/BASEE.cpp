#include<stdio.h>
#include<math.h>

int dp[1000]={0};
/*dp[2]=1;
dp[3]=2;
dp[4]=3;*/
int isone(long int i,long int b)
{
	int n=log(i-i%b)/log(b);
	long int nl=pow(b,n);
	long int nh=nl<<1;
	if(i>=nl && i<nh)	return 1;
	else return 0;
}

int main(){
	long int t,i,c,n;
	scanf("%ld",&t);
	while(t--){
		c=1;
		scanf("%ld",&n);
		if(n==0)printf("0\n");
		else if(n==1)printf("INFINITY\n");
		else if(n==2)printf("1\n");
		else if(dp[n]!=0) printf("%d\n",dp[n]);
		else{
			for(i=2;i<n;i++){
				c+=(isone(n,i));
			}
		dp[n]=c;
		printf("%d\n",dp[n]);
		}
	}
}
