#include<bits/stdc++.h>
using namespace std;
int vis[5000];
//children of 'i' are '2*i + 1' and '2*i + 2'
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,q;
		scanf("%d%d",&n,&q);
		for(int i=0;i<(1<<n)
