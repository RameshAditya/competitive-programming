/*input
5
weird
*/
#include<iostream>
#include<string>
using namespace std;

int vowel(string s, int i){
	//for(int i=0;i<s.length();i++)
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')return true;
		else return false;
}

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	string r="";
	for(int i=0;i<s.length()-1;i++){
		if(vowel(s,i) && vowel(s,i+1))r+=s[i], i+=1;
		else r+=s[i];
	}
	r+=s[n-1]+'\0';
	cout<<r;
}
