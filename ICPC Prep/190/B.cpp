#include<bits/stdc++.h>
using namespace std;

float dista(int x1, int y1, int x2, int y2){
	return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int main(){
	int x1, y1, r1;
	cin>>x1>>y1>>r1;
	int x2, y2, r2;
	cin>>x2>>y2>>r2;
	
	if(dista(x1, y1, x2, y2) + min(r1, r2) <= max(r1,r2)){
		float ans = max(r1, r2) - dista(x1, y1, x2, y2) - min(r1, r2);
		float ans1=max(r1,r2)-min(r1,r2);
		ans1/=2;
		ans=ans/2;
		cout<<min(ans,ans1);
	}
	else
		{float ans=(dista(x1, y1, x2, y2) - r1 - r2)/2;
		if(ans>0)cout<<ans;
		else cout<<0;
		//cout<<ans>0?ans:0;	
		}
}
