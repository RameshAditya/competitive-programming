#include<bits/stdc++.h>
using namespace std;

int main(){
	//string x="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n, t;
	#ifndef ONLINE_JUDGE
		freopen("TBOMB_input.txt", "w", stdout);
		//freopen("output.txt", "w", stdout);
	#endif
	//srand(unsigned(time(0)));
	cout<<"50\n";
	for(int i=0;i<50;i++){

		//while(tc--){
		int n=rand()%100 + 1;
		int t=rand()%100 + 1;
		cout<<n<<"XXX"<<t<<"\n";
		string names[n];
		for(int i=0;i<n;i++){
			names[i]='a';
			for(int j=0;j<rand()%100;j++)names[i]+=(char)(rand()%26 + 'a');
			names[i]+='\0';
			//for(int x=0;names[i][x]!=' ';x++)cout<<names[i][x];
			cout<<names[i]<<"\n";
		}
		int times[n];
		for(int i=0;i<n;i++){
			times[i]=rand()%t;
			cout<<times[i]<<"\n";
		}
		int current=0;
		//while(t>0){
	//		if(times[current]>=t){
				//cout<<names[current]<<"\n"; break;
	//		}
	//		t-=times[current];
	//		current=(current+1)%n;
		}
	}

