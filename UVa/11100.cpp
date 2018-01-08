#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int ct[1005];
	int A[1005];
	while(n!=0){
		memset(ct, 0, sizeof(ct));
		int maximum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&A[i]);
			ct[A[i]]++;
			maximum=max(maximum, A[i]);
		}
		//sort(A,A+n);
		int cur=-1;
		int res=0;
		printf("%d\n", (n/2) + (n%2));
		for(int i=0;i<=maximum;i++){
			if(ct[i]>0){
				if(cur==-1)cur=i;	
				else{
					if(ct[i]>ct[cur]){
						for(int j=0;j<ct[cur];j++){
							printf("%d %d\n",cur, i);
							res+=2;
						}
						ct[i]-=ct[cur];
						ct[cur]=0;
						cur=i;
					}
					else if(ct[i]<ct[cur]){
						for(int j=0;j<ct[i];j++){
							printf("%d %d\n",cur,i);
							res+=2;
						}
						ct[cur]-=ct[i];
						ct[i]=0;
					}
					else if(ct[i]==ct[cur]){
						for(int j=0;j<ct[i];j++){
							printf("%d %d\n",cur,i);
							res+=2;
						}
						ct[cur]-=ct[i];
						ct[i]=0;
						cur=-1;						
					}
				}
			}
		}
		if(res<n)printf("%d\n",maximum);
		printf("\n");
		scanf("%d",&n);
		
	}
}
