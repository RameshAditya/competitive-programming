#include<iostream>
#include<vector>
using namespace std;

long int min(long int a,long int b,long int c){
	if(a>=b && a>=c)return a;
	else if(b>=a && b>=c)return b;
	else return c;
}
long int mem(int i,int j, vector<int> a, vector<int> b, vector<int> c){
	//if(memo[i][j]!=0)return memo[i][j];
	if(j==0);
	long int res=0;
	for(int k=i;k<j;k++)res+=a[k];
	return min(res,mem(i,j-2,b,a,c)+b[j-2],mem(i,j-3,c,a,b)+c[j-3]);
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n;
		//long int memo[1001][1001]={0};
		scanf("%d",&n);
		vector<int> a,b,c;
		int hold;
		int sum=0;
		for(int in=0;in<n-1;in++){scanf("%d",&hold);a.push_back(hold);sum+=hold;}
		for(int im=0;im<n-2;im++){scanf("%d",&hold);b.push_back(hold);sum+=hold;}
		for(int ib=0;ib<n-3;ib++){scanf("%d",&hold);c.push_back(hold);sum+=hold;}
		//long int sum=0;
		//for(int ix=0;ix<n-1;ix++)mem[ix][ix+1]=a[ix];
		//for(int iy=0;iy<n-2;iy++)mem[iy][iy+2]=b[iy];
		for(int dist=1;dist<n;dist++){
		for(int i=0;i<n-1;i++){
				//printf("%c to %c dist of %ld\n",i+'A',j+'A',mem(i,j,a));
				sum+=mem(i,i+dist,a,b,c);
		}
	}
		printf("%d\n",sum);
	}	
}
