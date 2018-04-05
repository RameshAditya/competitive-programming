#include<bits/stdc++.h>
using namespace std;

vector<int> primes;
int sieve[100000];

int pop(){
	memset(sieve, 1, sizeof(sieve));
	sieve[0]=0;
	sieve[1]=0;
	for(int i=2;i*i<100000;i++)
		if(sieve[i])
			for(int j=i*i;j<100000;j+=i)
				sieve[j]=0;
}

int gen(){
	for(int i=0;i<100000;i++)if(sieve[i])primes.push_back(i);	
}

int main(){
	int t=100000;
	#ifndef ONLINE_JUDGE
		freopen("PRIMQ_input.txt", "w", stdout);
		//freopen("output.txt", "w", stdout);
	#endif
	cout<<t<<"\n";
	//pop();
	//gen();
	while(t--){
		int l, r;
		l=rand()%10000;
		r=min(100000, max(l+50000, l+rand()%(100000 - l)));
		cout<<l<<" "<<r<<"\n";
		//std::vector<int>::iterator lo = lower_bound(primes.begin(), primes.end(), l);
		//std::vector<int>::iterator up = upper_bound(primes.begin(), primes.end(), r);
		//cout<<(up-lo)<<"\n";	
	}
}
