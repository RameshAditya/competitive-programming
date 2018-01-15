/*

Difficulty: Medium-Hard
Problem Name: HOUS - Aditya's investment
Setter Name: Aditya Ramesh

Problem Statement -
Aditya wants to invest in the real estate business. He likes polygon shaped houses but he can't analyze all the houses he's interested in investing though. Help him do this.

You're given the expected cost per square foot of each house, and the co-ordinates of each house (in clockwise order) on a 2D graph. Find the largest potential value he can recieve.

Input -
T test cases (T<100)
An integer N, denoting the number of houses (1<N<100)
An array of N integers denoting the expected values of each house's square footage (1< Ni <100)

Now the details of N houses follow
The first line of each house is an integer M. (1<M<100)
M lines follow per house, each of the form "x y" indicating a vertex exists at the co-ordinate (x, y) where 1<=x<=100000 and 1<=y<=100000

Output -
The value of the most expensive house

Sample - 
Input -
1
3
10 20 30
4
0 0
1 0
1 1
0 1
4
0 0
2 0
2 2
0 2
4
0 0
3 0
3 3
0 3

Output - 
270

Explanation -
The 3rd house with coordinates - [ (3,0), (0,0), (0,3), (3,3) ] has the maximum value as its area is 9 square feet and its value per foot is 30.
Its total value is thus 9*30 = 270.
*/


#include<bits/stdc++.h>
using namespace std;

struct point{
	int x, y;
}corners[105];

int n, m, x, y;
long long val[105];


int crossproduct(struct point a, struct point b){
	return a.x*b.y - b.x*a.y;	
}

long long area(int no){
	long long roi=0;
	struct point curvec;
	long long curarea=0;
	
	curvec.x=corners[0].x;
	curvec.y=corners[0].y;
	
	for(int i=1;i<m;i++){
		curarea += crossproduct(curvec, corners[i]);
		curvec.x+=corners[i].x;
		curvec.y+=corners[i].y;
	}
	
	roi = val[no]*curarea;
	return roi;
}

int main(){
	int tc;
	#ifndef ONLINE_JUDGE
		freopen("HOUS_input.txt", "r", stdin);
		freopen("HOUS_output.txt", "w", stdout);
	#endif
	cin>>tc;
	while(tc--){
		cin>>n;
		for(int i=0;i<n;i++)cin>>val[i];
		long long ans=0;
		
		for(int i=0;i<n;i++){
			
			cin>>m;
			int prevy, prevx;
			int x,y;
			prevx=0;
			prevy=0;
			
			for(int j=0;j<m;j++){
				cin>>x>>y;
				corners[j].x=x - prevx;
				corners[j].y=y - prevy;
				prevx=x;
				prevy=y;
				//cout<<"corners[] = "<<corners[j].x<<"i + "<<corners[j].y<<"j\n";
			}	
			
			//cout<<"Area of house "<<i<<" is = "<<area(i)/2<<"\n";
			ans=max(ans, area(i)/2);
		}
		cout<<ans<<"\n";
	}
}
