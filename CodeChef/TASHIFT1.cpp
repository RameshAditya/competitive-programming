#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;
int p[1000006];

int main()
{
	ios::sync_with_stdio(false);
	int n=0;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	s2+=s2;
	for(unsigned int i=1;i<s1.length();i++)
	{
			int j=p[i-1];
			while( j> 0 && s1[i]!=s1[j]) j=p[j-1]; 
			
			if(s1[i]==s1[j])
				j++;
				p[i]=j;
	}
		int j=0,i=0,k=0,r=0,m=0;
		while(i<(int)s2.size())
		{
				if(s1[j]==s2[i])
				{
					k++;
					i++;j++;
					}
				else if(s1[j]!=s2[i])
				{
						k=0;
						if(j !=0)
							j=p[j-1];
						else
							i++;
				}
				
				if(j==(int)s1.size())
				break;
				
				if( k > m)
				{
					m=k;
					r=i-j;
				}
			}
			cout<<r<<endl;
	return 0;
}
