#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,pos,q;
		scanf("%d %d %d",&n,&pos,&q);
		while(q--){
			int l,r;
			scanf("%d %d",&l,&r);
			if(l<=pos && pos<=r){
				pos=(r+l-pos);
			}
		}
	printf("%d\n",pos);
	}
	return 0;
}
