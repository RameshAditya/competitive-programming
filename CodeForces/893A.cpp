#include<bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int spec=3;
	int a=1;
	int b=2;
	int ok=1;
	while(n--){
		int win;
		cin>>win;
		if(win==spec){
			ok=0;
			break;
		}
		else{
			if(win==a){
				int temp=spec;
				spec=b;
				b=temp;
			}
			else if(win==b){
				int temp=spec;
				spec=a;
				a=temp;
			}
		}
	}
	(ok==1)?cout<<"YES":cout<<"NO";
}
