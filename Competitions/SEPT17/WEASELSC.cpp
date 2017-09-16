#include<bits/stdc++.h>
using namespace std;
 
long long maxarea(long long A[], long long n)
{
	stack<long long> s;

    long long maxa = 0; 
    long long ptr;  
    long long atop;

    long long i = 0;
    while (i < n){
        if (s.empty() || A[s.top()] <= A[i])
            s.push(i++);

        else{
            ptr = s.top(); 
            s.pop(); 
            atop = A[ptr] * (s.empty() ? i : i - s.top() - 1);
            maxa = max(maxa,atop);
        }
    }
 
	while (s.empty() == false){
        ptr = s.top();
        s.pop();
        atop = A[ptr] * (s.empty() ? i : i - s.top() - 1);
        maxa = max(maxa,atop);
    }
 
    return maxa;
}
 
long long A[100005];
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--){
    	long long n,k;
    	scanf("%lld%lld",&n,&k);
    	for(long long i=0;i<n;i++)scanf("%lld",&A[i]);
    	printf("%lld\n",maxarea(A, n));
    }
	return 0;
}
