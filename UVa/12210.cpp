#include<bits/stdc++.h>
using namespace std;

int main(){
	int b,s;
	scanf("%d %d",&b, &s);
	int cno=0;
	while(b||s){
		int B[b], S[s];
		for(int i=0;i<b;i++)scanf("%d",&B[i]);
		for(int i=0;i<s;i++)scanf("%d",&S[i]);
		
		sort(B,B+b);
		if(b<=s)printf("Case %d: 0\n", ++cno);
		else printf("Case %d: %d %d\n", ++cno, b-s, B[0]);
		
		scanf("%d %d",&b,&s);	
	}
}
