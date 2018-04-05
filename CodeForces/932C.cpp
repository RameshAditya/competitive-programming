#include<bits/stdc++.h>
using namespace std;

int A[1000005];
int main(){
	int n,a,b;
	cin>>n>>a>>b;
		if(a<b)swap(a,b);
		int cur=n;
		int i=0;
		for(int i=0;i<n;i++)A[i]=i+1;
		i=0;
		
		while(i<n && cur>0){
			if(cur>=b && cur-a>0){
				for(int j=i;j<i+b;j++){
					if(j!=i+b-1)
						A[j] = A[j] + 1;
					else A[j] = A[j]-b+1;
				}
				cur-=b;
				i+=b;
			}
			else{
				for(int j=i;j<i+a;j++){
					if(j!=i+a-1)
						A[j] = A[j] + 1;
					else A[j] = A[j]-a+1;
				}
				cur-=a;
				i+=a;
			}
		}
		if(cur!=0)cout<<"-1\n";
		else for(int i=0;i<n;i++)cout<<A[i]<<" ";
		cout<<"\n";
}
