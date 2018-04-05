#include <iostream>
#include<math.h>
#include<vector>
using namespace std;
 
long int Area(long int X[],long int Y[], int n)
{
    long int area = 0;
    int j = n - 1;
    for (int i = 0; i < n; i++){
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i; 
    }
    return abs(area / 2);
}
int main() {
	#ifndef ONLINE_JUDGE
		freopen("HOUS_input.txt", "r", stdin);
		freopen("HOUS_output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    long int mx = 0;
	    cin>>n;
	    vector <int> cost(n);
	    for(int i =0; i <n;i++)
            cin>>cost[i];
	    for(int i =0 ; i<n;i++)
	    {
    	    int m;
    	    cin>>m;
    	    long int x[200],y[200];
            for(int i =0; i <m ; i++)
    	        cin>>x[i]>>y[i];
    	    long int area = Area(x,y,m);
    	    if (area*cost[i] > mx)
    	        mx = area*cost[i];
	    }
	    cout<<mx<<endl;
	}
	return 0;
} 
