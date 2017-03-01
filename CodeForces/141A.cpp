#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string v1,v2,v3;
	cin>>v1>>v2>>v3;
	v1+=v2;
	sort(v1.begin(),v1.end());
	sort(v3.begin(),v3.end());
	(v1==v3)?printf("YES\n"):printf("NO\n");
	
}
