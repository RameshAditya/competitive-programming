#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    long long int n;
    while(t--)
    {
        scanf("%lld",&n);
        if(n==0||n==1||n==2) printf("1\n");
        else printf("%lld\n",(long long int)floor((log(2*acos(-1)*n)/2+n*(log(n)-1))/log(10))+1);
    }
    return 0;
}
