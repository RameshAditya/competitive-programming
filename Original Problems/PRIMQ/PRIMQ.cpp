/*

Difficulty: Medium
Problem Name: PRIMQ - Aditya's Homework
Setter Name: Aditya Ramesh

Problem Statement -
Aditya's math teacher was upset with him for not doing his homework. She gave him a punishment. He's got an algorithm for it but he wants a better one. Can you beat his?

Here's his problem -

His teacher gave him T questions.
Each question is of the form "l r" (space separated)
The answer to each question is one number - the number of primes between l and r (including l and r) 

Input - 
The number of questions, T (<100 000)

T lines follow, each line of the following being of the form "l r" 
( 1 < l < r < 100 000)

Output -
T lines of output
Each line displaying the number of primes between l and r

Sample - 
Input -
3
1 10
5 20
30 50

Output - 
4
6
5

Explanation -
Test case 1 - 2, 3, 5, 7
Test case 2 - 5, 7, 11, 13, 17, 19
Test case 3 - 31, 37, 41, 43, 47
*/


//Working code
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

int isprime(int x){
	int ok=1;
	for(int i=2;i*i<=x;i++)if(x%i==0)return 0;
	return 1;	
}

int main(){
	//#ifndef ONLINE_JUDGE
	//	freopen("PRIMQ_input.txt", "r", stdin);
	//	freopen("PRIMQ_output.txt", "w", stdout);
	//#endif
	int t;
	cin>>t;
	//pop();
	//gen();
	while(t--){
		int l, r;
		cin>>l>>r;
		//std::vector<int>::iterator lo = lower_bound(primes.begin(), primes.end(), l);
		//std::vector<int>::iterator up = upper_bound(primes.begin(), primes.end(), r);
		
		//for(int i = lo-primes.begin(); i<up-primes.begin();i++)cout<<"P:"<<primes[i]<<" ";
		int ct=0;
		for(int i=l;i<=r;i++)if(isprime(i))ct++;
		cout<<ct<<"\n";	
	}
}
