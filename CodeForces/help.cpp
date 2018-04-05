#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n; 
	int a = 0, c = 10*n, d = 10; 
	while(c/=d) a += pow(c%d, 3); 
	cout<<((a==n)?"YES":"NO");
}		
