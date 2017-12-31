#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	std::ios_base::sync_with_stdio(0);
	cin>>n;
	char x;
	string s;
	char state[26];
	memset(state, 0, sizeof(state));	//-1 unknown, 0 poss, 1 imposs
	int poss=26;
	char ans;
	int op=0;
	while(n--){
		cin>>x>>s;
		if(x=='!' && poss==1){
			op++;
		}
		if(x=='.'){
			for(int i=0;i<s.length();i++){
				if(state[s[i]-'a']==0){
					state[s[i]-'a']++;
					poss--;
				}
			}
		}
		if(poss==1){
			for(int i=0;i<26;i++)if(state[i]==0)ans=('a'+i);
		}
		if(x=='?' and s[0]==ans)break;
	}
	cout<<op;
}
