#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int t;scanf("%d",&t);
	while(t--){
	int n,k; scanf("%d %d",&n,&k);
	int max[100];
	int mp=0;
	char s[1000001];
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++){
		int j=i;
		while(s[i]==s[j])j++;
		max[mp++]=j-i+1;
		i=j-1;
	}
	sort(max,max+mp+1);
	while(k--){
		//for(int kk=0;kk<mp;kk++)printf("%d",max[kk]);
		max[mp++-1]/=2;
		sort(max,max+mp+1);}
	printf("%d\n",max[mp-1]);
}}
