#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)scanf("%d",A+i);
	int ptr=0;
	int i=0;
	while(i+1<n && A[i]<A[i+1]){i++;ptr++;}
	while(i+1<n && A[i]==A[i+1]){i++;ptr++;}
	while(i+1<n && A[i]>A[i+1]){i++;ptr++;}
	if(ptr==n-1)printf("YES\n");
	else printf("NO\n");
}

