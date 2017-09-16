#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,q;
		scanf("%d%d",&n,&q);
		int A[n];
		for(int i=0;i<n;++i)scanf("%d",&A[i]);
		int a,b,c,d;
		int B[n];
		int C[n];
		while(q--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		a--;
		c--;
		int bpp=0;
		for(int i=a;i<b;i++)B[bpp++]=A[i];
		int cpp=0;
		for(int i=c;i<d;i++)C[cpp++]=A[i];
		sort(B,B+bpp);
		sort(C,C+cpp);
		int res=0;
		int ap=0,cp=0;
		while(ap<bpp && cp<cpp){
			if(B[ap]!=C[cp])res++;
			ap++;
			cp++;
		}
		if(res<=1)printf("YES\n");
		else printf("NO\n");
	}
}
}
