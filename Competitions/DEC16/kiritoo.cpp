#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;



int n;
int a[100002];
int len[100002];
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    //sort(a,a+n);
    memset(len,0,sizeof(len));
    int ans=1;
    for (int i=0;i<n;i++)
    {
        int x=a[i];
        int tmp=1;
        for (int j=1;j*j<=x;j++)
        {
            if (x%j==0 && len[j]+1>tmp)
            {
                tmp=len[j]+1;
            }
            if (x%j==0 && len[x/j]+1>tmp)
            {
                tmp=len[x/j]+1;
            }
        }
        for (int j=1;j*j<=x;j++)
        {
            if (j!=1 && x%j==0 && len[j]<tmp)
            {
                len[j]=tmp;
            }
            if (x/j!=1 && x%j==0 && len[x/j]<tmp)
            {
                len[x/j]=tmp;
            }
        }
        ans=max(ans,tmp);
    }
    printf("%d",ans);
}
