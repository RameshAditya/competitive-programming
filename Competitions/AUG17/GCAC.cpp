#include<bits/stdc++.h>
using namespace std;

int t;
int n,m;
long long int minSalary[1001];
int hiredyet[1001];
long long int offeredSalary[1001];
long long int maxJobOffers[1001];
char qual[1001][1001];


int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)scanf("%lld",&minSalary[i]);
		for(int i=0;i<m;i++)scanf("%lld%lld",&offeredSalary[i],&maxJobOffers[i]);
		for(int i=0;i<n;i++)scanf("%s",&qual[i]);
		for(int i=0;i<m;i++)hiredyet[i]=0;
		long long int newWorkers=0;
		long long int totSalary=0;
		int noHires=m;

		for(int cur_stud=0;cur_stud<n;cur_stud++){
			int maxofferedsalary=-1;
			int bestcompany=-1;
			for(int cur_company=0;cur_company<m;cur_company++){
				if(qual[cur_stud][cur_company]=='1'){
					if(maxJobOffers[cur_company]>0 && offeredSalary[cur_company]>minSalary[cur_stud] && offeredSalary[cur_company]>maxofferedsalary){
						maxofferedsalary=offeredSalary[cur_company];
						bestcompany=cur_company;
					}
				}
			}
			if(bestcompany!=-1){
				totSalary+=offeredSalary[bestcompany];
				newWorkers++;
				if(hiredyet[bestcompany]==0){hiredyet[bestcompany]=1;noHires--;}
				maxJobOffers[bestcompany]--;
			}
		}

		printf("%lld %lld %d\n",newWorkers,totSalary,noHires);
	}
}
