#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b)?a:b
int main(){
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	long long int res=0;
	double a[50];
	map<double,int> table;
	double original[50];
	for(int i=0;i<n;i++){scanf("%lf",&a[i]);original[i]=a[i];};
	for(int i=0;i<n;i++){a[i]=log10(a[i]);/*printf("a[%d]=%lf\n",i,a[i]);*/
	//if(table.find(a[i])==table.end())table[a[i]]=1;
	//else table[a[i]]*=2;
	table[a[0]]=1;
	}
	map<double,int> copy;
	for(int i=0;i<n;++i){
		copy=table;
		if(table.find(a[i])==table.end())
		table[a[i]]=1;
		
		for(map<double,int>::reverse_iterator rit=copy.rbegin();rit!=copy.rend();++rit){
			//printf("Adding %lf to %lf at a[%d] (original was %lf)\n",rit->first,a[i],i,original[i]);
			if(copy.find(a[i]+rit->first)==copy.end())
			table[a[i]+rit->first]=1+table[a[i]];
			else table[a[i]+rit->first]*=2;
		}
	}

	for(map<double,int>::iterator it=table.begin();it!=table.end();++it){
		if(it->first<=log10(k)){
		printf("op: %lf: %d\n",it->first,it->second);
		res+=it->second;
		}
	}
	printf("%lld\n",max(0,res-1));
	return 0;
}
