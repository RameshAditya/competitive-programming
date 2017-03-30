#include<iostream>
#include<algorithm>

int main(){
	int n(0); scanf("%d",&n);
	int *strength = new int[n];
	bool *use = new bool[n];
	
	for(int k=0;k<n;k++){scanf("%d",strength+k);use[k]=0;}
	std::sort(strength,strength+n);
	
	int piles(0),total(0);	
	for(int j=0;j<n;j++){	
		if(use[j])continue;	
		++piles;
		total=1;
		for(int k=j+1;k<n;k++) 
			if(strength[k]>=total && !use[k])	
				{++total; use[k]=1;} 	
	}
	printf("%d\n",piles);	
}
