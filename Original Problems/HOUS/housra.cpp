#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("HOUS_input.txt", "r", stdin);
		freopen("HOUS_output.txt", "w", stdout);
	#endif
    long long int num,i;
    cin>>num;
    for(i=0;i<num;i++)
    {
    long long int numh,maxcost=0;
	cin>>numh;
	long long int costprsq[numh];
	for(long long int k=0;k<numh;k++)
	cin>>costprsq[k];
	for(long long int m=0;m<numh;m++)
	{	
	long long int n;
	cin>>n;
	long long int X[n],Y[n];
	for(long long int k=0;k<n;k++)
	cin>>X[k]>>Y[k];
    double area = 0.0,cost;
    long long int j=n-1;
    for (long long int k = 0; k < n; k++)
    {
        area += (X[j] + X[k]) * (Y[j] - Y[k]);
        j = k;
    }
    cost=abs(area / 2.0)*costprsq[m];
    if(cost>maxcost)
    maxcost=cost;
	}
	cout<<maxcost<<endl;
}
}
