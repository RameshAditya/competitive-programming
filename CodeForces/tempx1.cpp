#include<bits/stdc++.h>
using namespace std;

int main(){
	char tl[3][3];
	char tm[3][3];
	char tr[3][3];
	char ml[3][3];
	char mm[3][3];
	char mr[3][3];
	char dl[3][3];
	char dm[3][3];
	char dr[3][3];
	std::ios_base::sync_with_stdio(0);
	for(int i=0;i<3;i++)cin>>tl[i];
	for(int i=0;i<3;i++)cin>>tm[i];
	for(int i=0;i<3;i++)cin>>tr[i];
	for(int i=0;i<3;i++)cin>>ml[i];
	for(int i=0;i<3;i++)cin>>mm[i];
	for(int i=0;i<3;i++)cin>>mr[i];
	for(int i=0;i<3;i++)cin>>dl[i];
	for(int i=0;i<3;i++)cin>>dm[i];
	for(int i=0;i<3;i++)cin>>dr[i];
	int x,y;
	cin>>x>>y;
	int ro=x/3;
	int co=x%3;
	int free=0;
	for(int i=0;i<3;i++)for(int j=0;j<3;j++){
		if(ro==0){
			if(co==0)free+=(tl[i][j]=='.');
			if(co==1)free+=(tm[i][j]=='.');
			if(co==2)free+=(tr[i][j]=='.');
		}
		if(ro==1){
			if(co==0)free+=(ml[i][j]=='.');
			if(co==1)free+=(mm[i][j]=='.');
			if(co==2)free+=(mr[i][j]=='.');
		}
		if(ro==2){
			if(co==0)free+=(dl[i][j]=='.');
			if(co==1)free+=(dm[i][j]=='.');
			if(co==2)free+=(dr[i][j]=='.');
		}
	}
	if(free!=0){
		if(ro==0 and co==0){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(tl[i][j]=='.')tl[i][j]='!';
		}
		if(ro==1 and co==0){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(ml[i][j]=='.')ml[i][j]='!';
		}
		if(ro==2 and co==0){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(dl[i][j]=='.')dl[i][j]='!';
		}
		
		if(ro==0 and co==1){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(tm[i][j]=='.')tm[i][j]='!';
		}
		if(ro==1 and co==1){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(mm[i][j]=='.')mm[i][j]='!';
		}
		if(ro==2 and co==1){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(dm[i][j]=='.')dm[i][j]='!';
		}
		
		if(ro==0 and co==2){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(tr[i][j]=='.')tr[i][j]='!';
		}
		if(ro==1 and co==2){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(mr[i][j]=='.')mr[i][j]='!';
		}
		if(ro==2 and co==2){
			for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(dr[i][j]=='.')dr[i][j]='!';
		}
		
	}
	if(free==0){
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(tl[i][j]=='.')tl[i][j]='!';
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(ml[i][j]=='.')ml[i][j]='!';
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(dl[i][j]=='.')dl[i][j]='!';
		
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(tr[i][j]=='.')tr[i][j]='!';
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(mr[i][j]=='.')mr[i][j]='!';
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(dr[i][j]=='.')dr[i][j]='!';
		
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(tm[i][j]=='.')tm[i][j]='!';
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(dm[i][j]=='.')dm[i][j]='!';
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(mm[i][j]=='.')mm[i][j]='!';
	}
	
	for(int i=0;i<3;i++)cout<<tl[0][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<tm[0][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<tr[0][i]; cout<<" ";
	cout<<"\n";
	for(int i=0;i<3;i++)cout<<tl[1][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<tm[1][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<tr[1][i]; cout<<" ";
	cout<<"\n";
	for(int i=0;i<3;i++)cout<<tl[2][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<tm[2][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<tr[2][i]; cout<<" ";
	
	cout<<"\n\n";
	for(int i=0;i<3;i++)cout<<ml[0][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<mm[0][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<mr[0][i]; cout<<" ";
	cout<<"\n";
	for(int i=0;i<3;i++)cout<<ml[1][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<mm[1][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<mr[1][i]; cout<<" ";
	cout<<"\n";
	for(int i=0;i<3;i++)cout<<ml[2][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<mm[2][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<mr[2][i]; cout<<" ";
	
	
	cout<<"\n\n";
	for(int i=0;i<3;i++)cout<<dl[0][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<dm[0][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<dr[0][i]; cout<<" ";
	cout<<"\n";
	for(int i=0;i<3;i++)cout<<dl[1][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<dm[1][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<dr[1][i]; cout<<" ";
	cout<<"\n";
	for(int i=0;i<3;i++)cout<<dl[2][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<dm[2][i]; cout<<" ";
	for(int i=0;i<3;i++)cout<<dr[2][i]; cout<<" ";
	
}
