/*

Difficulty: Easy
Problem Name: TBOMB - Aditya's Bomb
Setter Name: Aditya Ramesh

*/

/*
Problem Statement -

There are T test cases.

Aditya is playing with his (N-1) other friends. They're standing in a circle and are playing a game where they pass a ticking time bomb (an imaginary one) to their right neighbour. 
The person holding it when the timer hits zero is the loser.

Now his friends are strategic (some are). They hold on to the bomb for different durations before passing it to their neighbour.

Given the initial timer T of the bomb and the durations D each person holds on to the bomb, find the loser.

Input - 
Test cases T (1<100)
The number of people participating, N (<100)
The timer of the bomb, T (<1000)
An array of N names of the people playing ( 1 < |s| < 100)
An array of N durations of each people holding the bomb ( 1 < Di < 100)

Output -
The name of the loser

Sample - 
Input -
1
3 10
Aditya
Satyam
Ayush
5
3
1

Output - 
Aditya
*/


//Working code
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "w", stdin);
		freopen("TBOMB_input.txt", "r", stdin);
		freopen("TBOMB_output.txt", "w",stdout);
	#endif
	int tc;
	cin>>tc;
	while(tc--){
		cin>>n;
		cin>>t;
		string names[n];
		for(int i=0;i<n;i++)cin>>names[i];
		int times[n];
		for(int i=0;i<n;i++)cin>>times[i];
		int current=0;
		while(times[current]<t){
			t-=times[current];
			current=(current+1)%n;
		}
		cout<<names[current]<<"\n";
	}
}
