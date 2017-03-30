#include<stdio.h>

int main()
{
	int i,j,k,n,l,r,A[1001];
	int state[100001];
	scanf("%d %d %d",&n,&l,&r);
	for(i=0;i<n;i++){scanf("%d",A+i);}
	
	int ct=0;
	for(i=l;i<=r;i++){
		if(state[i]==0){
			for(j=0;j<n;j++){
				for(k=0;k<n;k++){
					if(i==A[j]||A[j]==A[k]||i==A[k])continue;
					else{
						if(i+A[j]>A[k]&&i+A[k]>A[j]&&A[j]+A[k]>i){
							state[i]=1;
							if(A[j]>=l && A[j]<=r && state[A[j]]==0){state[A[j]]=1;ct++;}
							if(A[k]>=l && A[k]<=r && state[A[k]]==0){state[A[k]]=1;ct++;}
							ct++;
							j=n;
						}
					}
				}
			}
		}
	}
	//for(i=l;i<=r;i++)if(state[i])ct++;
	printf("%d\n",ct);
}
