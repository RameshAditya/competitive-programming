#include<stdio.h>

#define max(a,b) (a>b)?a:b

const int n=50001;
int t[2*n]={0};
//int A[n];
/*int f(int start, int end){// int allneg=0){
	int allneg=1;
	int lneg=t[start];
	for(int i=start;i<=end;i++){if(t[i]>0){allneg=0;break;}lneg=max(lneg,t[i]);}
	if(allneg)return lneg;
	else{
	//return least negative
	int maxsum=t[start];
	int cur=t[start];
	for(int i=start;i<=end;i++){
		if(cur+t[i]>maxsum)maxsum=cur+t[i];
		else if(cur+t[i]>0)cur+=t[i];
		else cur=0;
	}
	return max(cur,maxsum);
}
}*/

void build(int n){
	for(int i=n-1;i>0;i--)t[i]=max(t[i<<1]+t[i<<1|1],max(t[i<<1],t[i<<1|1]));
}

/*void update(int ind,int val, int n){
	for(t[ind+=n]=val;ind>1;ind>>=1)t[ind>>1]=f(t[ind],t[ind^1]);
}*/

void query(int l,int r,int n){
	int res=0;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1){
		if(l&1)res+=t[l++];
		if(r&1)res+=t[--r];
	}
	printf("%d\n",res);
}

void disptree(int n){
	for(int i=0;i<2*n;i++)printf("%d ",t[i]);
}

int main(){
	int i;
	int x;	scanf("%d",&x);
	for(i=x;i<2*x;i++)scanf("%d",t+i);
	build(x);
	disptree(x);
	int q; scanf("%d",&q);
	while(q--){
		int l,r;
		scanf("%d %d",&l,&r);
		query(l-1,r,x);
	}
	return 0;
}

