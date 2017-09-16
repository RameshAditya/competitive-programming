#include<bits/stdc++.h>
using namespace std;
int isprime[1000001];
int A[100005];
int primes[100005];
long long int dp[1005][76000];

void fastscan(int &number){
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-'){negative = true;c = getchar();}
    for (; (c>47 && c<58); c=getchar()) number = number *10 + c - 48;
    if (negative)number *= -1;
}

int s=0;

void prep(){
	for(int i=2;i<1000001;i++)isprime[i]=1;
	isprime[0]=0;
	isprime[1]=0;
	for(int i=2;i<1001;i++)
	if(isprime[i]){
		for(int j=i*i;j<1000001;j+=i)
			isprime[j]=0;
		//primes[s++]=i;
	}
	for(int i=2;i<1000001;i++)if(isprime[i])primes[s++]=i;
}

long long int f(int l,int r,int x,int y){
	long long int result=0;
	for(int i=lower_bound(primes,primes+s,x)-primes;i<=lower_bound(primes,primes+s,y)-primes;i++){
		for(int j=l-1;j<r;j++){
				/*int num=A[j];
				long long int exp=0;
				while(primes[i]!=0 && num%primes[i]==0){exp++;num=num/primes[i];}
				*/
				//printf("Adding dp[i][j]=dp[%d][%d] ",j,primes[i);
				long long int exp=dp[j][primes[i]];
				result+=exp;
			}
		}
	return result;
}

int main(){
	prep();
	int n;
	fastscan(n);
	for(int i=0;i<n;i++)fastscan(A[i]);
	int q;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++){
		int num=A[i];
		for(int j=2;j<=num;j++){
			while(num%j==0){num=num/j;dp[i][j]++;}
		}
	}
	
	fastscan(q);
	while(q--){
		int l,r,x,y;
		fastscan(l);
		fastscan(r);
		fastscan(x);
		fastscan(y);
		printf("%lld\n",f(l,r,x,y));	
	}
}
