#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="";
	int cno = 0;
	int res = 0;
	while(s != "end"){
		cin>>s;
		if(s=="end")break;
		res = 0;
		vector< stack<int> > place(26);
		int res=0;
		for(int c=0;c<s.length();c++){
			int done=0;
			for(int i=0;i<26;i++){
				if(done)break;
				if(place[i].size()==0){
					place[i].push(s[c]);
					done=1;
					res++;
				}
				else if(s[c]<=place[i].top()){
					place[i].push(s[c]);
					done=1;
				}
			}
		}
		
		printf("Case %d: %d\n", ++cno, res);		
	}
}
