#include<bits/stdc++.h>
using namespace std;

int main(){
	set<string> a;
	a.insert("Hi");
	a.insert("Bye");
	for(auto i:a)cout<<i[0]<<" ";
}
