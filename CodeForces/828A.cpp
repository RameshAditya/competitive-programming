#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int singles=0;
	int singleindouble=0;
	int doubleindouble=0;
	int res=0;
	while(n--){
		int x;
		scanf("%d",&x);
		if(x==1){
			if(singles<a)singles++;
			else if(singleindouble&1 && singleindouble+1+2*doubleindouble<=b)singleindouble++;
			else res++;
		}
		if(x==2){
			if(b-singleindouble/2-doubleindouble>=0)doubleindouble++;
			else res+=2;
		}
		
	}
	printf("%d\n",res);
}
