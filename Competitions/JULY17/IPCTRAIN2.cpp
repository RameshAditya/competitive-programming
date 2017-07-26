#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 100010
long int D[MAXSIZE],T[MAXSIZE],S[MAXSIZE];
long int totsad=0;

int partition(long int D[],long int T[],long int S[],int g,int p){
	for(int j=g;j<p;j++){
		if(D[j]<D[p]||(D[j]==D[p] && S[j]>=S[p])){
			long int temp;
			temp=D[j];
			D[j]=D[g];
			D[g]=temp;
			
			temp=T[j];
			T[j]=T[g];
			T[g]=temp;
			
			temp=S[j];
			S[j]=S[g];
			S[g]=temp;
			
			g++;
		}
	}
	long int temp;
	temp=D[p];
	D[p]=D[g];
	D[g]=temp;
	
	temp=T[p];
	T[p]=T[g];
	T[g]=temp;
	
	temp=S[p];
	S[p]=S[g];
	S[g]=temp;
	
	return g;	
}

int quicksort(long int D[],long int T[],long int S[],int s,int e){
	if(s>=e)return 0;
	int p=partition(D,T,S,s,e);
	quicksort(D,T,S,s,p-1);
	quicksort(D,T,S,p+1,e);
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		priority_queue<pair<long int,long int> > pq;
		long int n,d;
		totsad=0;
		scanf("%ld %ld",&n,&d);
		for(long int i=0;i<n;i++){
			scanf("%ld %ld %ld",&D[i],&T[i],&S[i]);	
			totsad+=T[i]*S[i];
			//T[i]--;
			D[i]--;
		}
		quicksort(D,T,S,0,n-1);
		long int curday=0;
		long int curperson=0;
		while(curday<d){
			while(curperson<n && curday>=D[curperson]){
				//printf("Inserting %ld-%ld\n",S[curperson],T[curperson]);
				pq.push(make_pair(S[curperson],T[curperson]));
				curperson++;
			}
			
			while(pq.top().second==0)pq.pop();
			//printf("Current top is %ld-%ld\n",pq.top().first,pq.top().second);
			
			if(pq.top().second>=1)
				totsad-=pq.top().first;
				
			//printf("Subtracted: %ld-%ld\n",pq.top().first,pq.top().second);
			pair<long int,long int> temp=pq.top();
			if(pq.size()>1){printf("Entr\n");pq.pop();}
			else priority_queue<pair<int, int> > pq();
			
			//printf("After popping, top is %ld %ld\n",pq.top().first,pq.top().second);
			if(temp.second>=1)pq.push(make_pair(temp.first,temp.second-1));
			curday++;
		}
		printf("%ld\n",totsad);	
	}
}
