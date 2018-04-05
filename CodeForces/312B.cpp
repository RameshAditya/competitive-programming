#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long double a, b, c, d;
	cin >> a >> b >> c >> d;
	
	long double ini = a / b;
	long double rat = ( 1 - (a/b) )*( 1 - (c/d));
	
	cout << fixed << setprecision(7) << ini/(1-rat) <<"\n";
	return 0;
	
}
