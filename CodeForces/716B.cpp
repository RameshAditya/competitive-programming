#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[500];
	cin>>s;
	int done[26];
	memset(done, 0, sizeof(done));
	int qns=0;
	int notseenyet=26;
	
	if(strlen(s)<26){
		cout<<-1;
		return 0;
	}
	int i;
	for(i=0;i<26;i++){
		qns+=(s[i]=='?');
		if(s[i]!='?'&&done[s[i]-'A']==0){
			notseenyet--;
			//done[s[i]-'A']++;
		}
		if(s[i]!='?')done[s[i]-'A']++;
	}
	//cout<<"q"<<qns<<" "<<notseenyet;
	for(;i<=strlen(s)-26;i++){
		if(qns>=notseenyet)break;
		qns+=(s[i]=='?');
		if(s[i]!='?'){
			done[s[i-26]-'A']--;
			if(done[s[i-26]-'A']==0)notseenyet++;
		
			done[s[i]-'A']++;
			if(done[s[i]-'A']==1)notseenyet--;
		}
	}
	int cptr=0;
	while(cptr<26 && done[cptr])cptr++;
	for(int j=i;j<i+26;j++){
		if(s[j]=='?')cout<<'A'+cptr; else cout<<s[j];
		done[cptr]=1;
		while(cptr<26 && done[cptr])cptr++;
	}
}
