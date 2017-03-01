#include<iostream>
#include<vector>

using namespace std;
int main(){
	vector<int> A;
	int n;
	scanf("%d",&n);
	int i=0;
	int x;
	for(;i<n;i++){scanf("%d",&x);A.push_back(x);}
	sort(A.begin(),A.end());
	vector<int> neg,zer,pos;
	for(i=0;i<n;i++){
		if(A[i]<0)neg.push_back(A[i]);
		else if(A[i]==0)zer.push_back(A[i]);
		else pos.push_back(A[i]);
	}
	if(neg.length()%2==0){zer.push_back(neg[neg.length()-1]);neg.pop();}
	printf("%d ", (int)neg.size() )
	for(i=0;i<(int)neg.length();i++){
		printf("%d ",neg[i]);
	}
}
