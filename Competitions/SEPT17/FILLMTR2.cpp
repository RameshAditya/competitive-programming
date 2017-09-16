#include<bits/stdc++.h>
using namespace std;
#define min(x,y) (x<y)?x:y
#define max(x,y) (x>y)?x:y
#define ff first
#define ss second

vector<pair <pair<int, int>, int > > query;
int A[100005];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,q;
		scanf("%d %d",&n,&q);
		//"un-initialize" all elements in final array A to -1
		for(int i=0;i<=n;i++)A[i]=-1;
		int ok=1;
		query.clear();
		//take and store queries for offline processing
		for(int qq=0;qq<q;qq++){
			int x,y,val;
			scanf("%d%d%d",&x,&y,&val);
			query.push_back(make_pair(make_pair(min(x,y),max(x,y)),val));
		}
		
		//sort the queries by x primarily and y secondarily
		sort(query.begin(),query.end());
		
		//iterate over queries
		for(int i=0;i<q;i++){
			
			//if main diagonal element of B isn't 0
			if(query[i].ff.ff==query[i].ff.ss && query[i].ss!=0){ok=0;}
			
			//if A[i] and A[j] are un-initialized
			else if(A[query[i].ff.ff]==-1 && A[query[i].ff.ss]==-1){
				A[query[i].ff.ff]=0;
				A[query[i].ff.ss]=query[i].ss;
			}
			
			//if either A[i] or A[j] is un-initialized
			else if(A[query[i].ff.ff]==-1 || A[query[i].ff.ss]==-1){
			
			//initialize the un-initialized based on the given input value
				if(A[query[i].ff.ff]==-1 && A[query[i].ff.ss]!=-1)
					A[query[i].ff.ff]=abs(query[i].ss-A[query[i].ff.ss]);
				
				else if(A[query[i].ff.ff]!=-1 && A[query[i].ff.ss]==-1)
					A[query[i].ff.ss]=abs(query[i].ss-A[query[i].ff.ff]);
			}
			
			else{
				//if both A[i] and A[j] are initialized, check if there's a conflict
				if(query[i].ss!=abs(A[query[i].ff.ss]-A[query[i].ff.ff])){
					ok=0;
				}
			}
			
		}
		//print result
		(ok==1)?printf("yes\n"):printf("no\n");
	}
	return 0;
}
