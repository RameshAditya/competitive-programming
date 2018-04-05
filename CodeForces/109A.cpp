#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int times = 0;
	if(n == 4){ cout << 4; return 0; }
	if(n == 8){ cout << 44; return 0; }
	int i;
	for(i = 0; i < 1000001 ; i++) if ( n>=4*i && (n-4*i)%7 == 0 ){times=i; break;}
	
	if(i == 1000001){ cout << -1; return 0; }
	
	for(int i = 0; i < times; i++)cout << 4;
	for(int i = (n-4*times)/7; i > 0; i--)cout << 7;
	cout << '\n';
	return 0;
}
