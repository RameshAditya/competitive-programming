#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;
 
long long int bigmod ( long long a, long long p, int m );
 
int main(){
    int t;
    long long a;
    long long p;
    scanf("%d",&t);
    while(t--){
    scanf("%lld %lld",&a,&p);
    printf("%lld\n",bigmod(a,p,10));
    }
   return 0;   
}
long long int bigmod ( long long a, long long p, int m )
{
    if (p==0)return 1;
    if (p%2) {
        return ((a%m)*(bigmod(a,p-1,m)))%m; 
    }
    else 
    {
        long long c = bigmod(a,p/2,m); 
        return ((c%m)*(c%m))%m;
    }
}
