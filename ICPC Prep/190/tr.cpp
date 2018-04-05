#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a(8);
	for(int i=0;i<8;i++)a[i]=10*i; //a= 0, 10, 20, 30 40 50 60 70	
	
	for(int i=0;i<8;i++)
	cout<<10*i <<" is at "<< lower_bound(a.begin(), a.end(), 10*i ) - a.begin()<<"\n";
}
