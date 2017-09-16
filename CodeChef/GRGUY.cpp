#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	char a[200005];
	char b[200005];
	while(t--){
		int res=0;
		scanf("%s%s",a,b);
		int minia=0,minib=0;
		int i=0;
		while(a[i]!='#'&&a[i]!='\0')i++;
		minia=i;
		i=0;
		while(b[i]!='#'&&b[i]!='\0')i++;
		minib=i;
		res=0;
		int ok=1;
		int cur=0;
		if(minia==minib && minia==0)ok=0;
		//if(ok&&minia>minib){
			cur=0;
			for(int i=max(minia,minib);a[i+1]!='\0';i++){
				if(a[i]=='#' && cur==0 && b[i]!='#'){cur=1;res++;}
				else if(a[i]=='#' && cur==0 && b[i+1]!='#'){cur=1;res++;}
				else if(b[i]=='#' && cur==1 && a[i]!='#'){cur=0;res++;}
				else if(b[i]=='#' && cur==1 && a[i+1]!='#'){cur=0;res++;}
				else ok=0;
			}
		//}
		(ok==1)?printf("Yes\n%d\n",res):printf("No\n");
	}
}
