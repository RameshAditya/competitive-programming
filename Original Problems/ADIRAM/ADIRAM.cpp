/*

Problem Statement -

Aditya, a world class assassin is tasked with the execution of a dictator. Ramesh, his partner is back at their secret HQ and has hacked into the cameras surrounding this dictator.

Aditya has T seconds of time within which he needs to execute his target and is constantly communicating with Ramesh.

Ramesh updates Aditya with a set of time intervals in which the dictator is being observed by some camera.

Aditya wants to know, within a set of given intervals of time, how many seconds did the dictator go unobserved based on the current information, when he could make the killshot.

Input Format -

The first line of input is the total number of seconds, Aditya has - T ( 1 <= T <= 1,00,000 )
The second line of input is the number of communications Aditya has with Ramesh - Q ( 1 <= Q <= 1,00,000 )
The next Q lines of input are of two types -
Type 1: "! L R" without quotes, "!" represents a camera observing the dictator, "L" represents the starting time and "R" represents the ending time the camera observes him. (inclusive)
Type 2: "? L R" without quotes, asks for how many moments Aditya thought he had to execute his target, within "L" starting time to "R" ending time (both inclusive)

Output Format -
For each query of the type "? L R" (without quotes), output a single number on a new line, showing the number of seconds the dictator was unobserved.

Sample input -
10
7
! 2 4
! 1 4
? 1 10
! 8 10
! 7 10
! 9 10
? 1 10


Output - 
6
2

Explanation -
At the first "?" type query, Aditya knows that the dictator is unobserved from the 5th to the 10th second.
At the second "?" type query, Aditya knows that the dictator is unobserved at the 5th second and at the 6th second.

NOTE: Both types of queries are equally likely to occur.
*/

#include<bits/stdc++.h>
using namespace std;

int lz[4000000];
int st[4000000];

int mark(int node, int s, int e, int l, int r){
	if(lz[node]!=-1){
		st[node] = e-s+1;
		lz[2*node] = lz[node];
		lz[2*node + 1] = lz[node];
		lz[node] = -1;
	}
	if(r<s||l>e)return 0;
	if(l<=s && e<=r){
		st[node] = (e-s+1);
		lz[2*node] = 1;
		lz[2*node + 1] = 1;
		lz[node]=-1;	
		return 0;
	}
	else{
		int m = (s+e)>>1;
		mark(2*node, s, m, l, r);
		mark(2*node + 1, m+1, e, l, r);	
		st[node] = st[2*node] + st[2*node + 1];
	}
}

int query(int node, int s, int e, int l, int r){
	if(lz[node]!=-1){
		st[node]=(e-s+1);
		lz[2*node] = lz[node];
		lz[2*node + 1] = lz[node];
		lz[node] = -1;
	}
	if(l>e||r<s)return 0;
	else if(l<=s && e<=r)return st[node];
	else{
		int m = (s+e)>>1;	
		int a = query(2*node, s, m, l, r);
		int b = query(2*node+1, m+1, e, l, r);
		return a+b;
	}
}
	
int main(){
	#ifndef ONLINE_JUDGE
		freopen("in04.txt", "r", stdin);
//		freopen("out5.txt", "w", stdout);
	#endif
	std::ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i=0;i<4*n;i++)lz[i]=-1, st[i]=0;
	int q;
	cin>>q;
	int xx=-1;
	while(q--){
		xx++;
		char ch;
		int a,b;
		cin>>ch;
		cin>>a>>b;
		if(ch=='!')
			mark(1, 0, n-1, a-1, b-1);
		else
			cout<<xx<<" : "<<b-a+1-query(1, 0, n-1, a-1, b-1)<<"\n";
	}
	return 0;
}
