#include<stdio.h>

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int noz=0;
		int noo=0;
		int bw=0;
		int A[501][501];
		for(int idx=0;idx<n;idx++)for(int jdx=0;jdx<n;jdx++){scanf("%d",&A[idx][jdx]);if(A[idx][jdx]&1)noo++;else noz++;}
		int i=1;
		noo-=n;
		if(noz==0)bw=2*n-3;
		else if(noo<=0)bw=0;
		else{
			//noo=(noo+1)/2; 
			while(noo>0 && i<n){
				if(noo>=n-i)
					{noo-=(n-i);bw++;}
				//else if(noo<n-i){noo=0;break;}
				if(noo>=n-i){noo-=(n-i);bw++;}
				i+=1;
				}
			if(noo>0)bw++;
		}
		printf("%d\n",(bw+1)/2);
	}
}			
