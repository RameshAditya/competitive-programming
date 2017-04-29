#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,h;
	scanf("%d%d",&n,&h);
	vector<int> a(n);
	int move;
	int curpos=0;
	int isholding=0;
	for(int i=0;i<n;i++)scanf("%d",&a[i]);	//number of boxes in stack i
	scanf("%d",&move);
	while(move!=0){
		if(move==1 && curpos!=0)curpos--;
		if(move==2 && curpos!=n-1)curpos++;
		if(move==3 && isholding==0 && a[curpos]>0){
			a[curpos]--;
			isholding=1;
		}
		if(move==4 && isholding==1 && a[curpos]+1<=h){
			a[curpos]++;
			isholding=0;
		}
	scanf("%d",&move);
	}
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	return 0;
}
