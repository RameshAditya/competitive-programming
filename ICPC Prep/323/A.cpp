#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	char B[n][n][n];
	if(n&1){
		cout<<"-1\n";
		return 0;
	}
	
	/*for(int i=0;i<n;i+=2){
		int times=2;
		while(times--){
			int cur=((i/2)&1);
			for(int j=0;j<n;j++){
				int x=0;
				for(int k=0;k<n;k+=2){
					if(!cur)
						B[i+1-times][j][k]=B[i+1-times][j][k+1]=(x==0)?'w':'b';
					else
						B[i+1-times][j][k]=B[i+1-times][j][k+1]=(x==0)?'w':'b';
				cur^=1;
				x^=1;
				}
			}
		}
	}*/
	
	
	for(int i=0;i<n;i++){
		if((i/2)%2==0){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k+=2){
				if(j%2){
					//b b w w ...
					if((k/2)%2==0){
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
					else{
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
				}
				else{
					if((k/2)%2!=0){
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
					else{
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
				}
			}
		}
		i=i+1;
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k+=2){
				if(j%2){
					//b b w w ...
					if((k/2)%2==0){
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
					else{
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
				}
				else{
					if((k/2)%2!=0){
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
					else{
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
				}
			}
		}	
	}
	else{
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k+=2){
				if(j%2){
					//b b w w ...
					if((k/2)%2==0){
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
					else{
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
				}
				else{
					if((k/2)%2!=0){
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
					else{
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
				}
			}
		}
		i=i+1;
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k+=2){
				if(j%2){
					//b b w w ...
					if((k/2)%2==0){
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
					else{
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
				}
				else{
					if((k/2)%2!=0){
						B[i][j][k]='w';
						B[i][j][k+1]='w';
					}
					else{
						B[i][j][k]='b';
						B[i][j][k+1]='b';
					}
				}
			}
		}	
	}
}
	
	
	
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				cout<<B[i][j][k];
			}
			cout<<"\n";
		}
	cout<<"\n";
	}
}
