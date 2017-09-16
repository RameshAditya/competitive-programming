#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	char s1[505];
	char s2[505];
	scanf("%s %s",s1,s2);
	int occura[26];
	int occurb[26];
	for(int i=0;i<26;i++)occura[i]=occurb[i]=0;
	
	for(int i=0;s1[i]!='\0';i++){occura[s1[i]-'a']++;occurb[s2[i]-'a']++;}
	int winner=-1;
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]>=2)winner=0;
	}
	
}
