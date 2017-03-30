#include<bits/stdc++.h>
using namespace std;
void build(vector<int> a, int n){
	//printf("Building: ");
	for(int i=n-1;i>0;i--)a[i]=a[i<<1]+a[i<<1|1];
}

/*void update(int index,int value,vector<int> a, int n){
	for(a[index+=n]=value;index>1;index>>=1)a[index>>1]=a[index]+a[index^1];
}*/

vector<int> update(int l,int r, vector<int> a, int n,int value){
	//int res=0;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1){
		if(l&1)a[l++]+=value;
		if(r&1)a[--r]+=value;
	}
	//printf("%d\n",res);
	return a;
}

void query(int l,int r, vector<int> a, int n){
	int res=0;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1){
		if(l&1)res+=a[l++];
		if(r&1)res+=a[--r];
	}
	printf("%d\n",res);
}


int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n,c; scanf("%d %d",&n,&c);
		vector<int> a;
		for(int n0=0;n0<2*n;n0++)a.push_back(0);
		//for(int i=0;i<n;i++){scanf("%d",&a[n+i]);}
		//for(int k=0;k<2*n;k++)printf("%d ",a[k]);
		build(a,n);
		int ch,val,l,r;
		while(c--){
			scanf("%d",&ch);
			if(ch==0){
				scanf("%d %d %d",&l,&r,&val);
				a=update(l-1,r,a,n,val);
				//for(int k=l-1;k<r;k++)update(k,val,a,n);
				printf("\nUpdated: ");
				for(int k=0;k<2*n;k++)printf("Index: %d and value: %d\n ",k,a[k]);
				printf("\n");
			}
			else{
				scanf("%d %d",&l,&r);
				query(l-1,r,a,n);
			}
		}
	}
	return 0;
}
