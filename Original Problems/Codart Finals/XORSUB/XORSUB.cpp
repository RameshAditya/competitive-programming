/*
You have an array of integers A1, A2, ..., AN. The function F(P), where P is a subset of A, 
is defined as the XOR of all the integers present in the subset. If P is empty, then F(P)=0.

Given an integer K, what is the maximum value of K XOR F(P), over all possible subsets P of A?

Input
The first line contains T, the number of test cases. Each test case consists of N and K in one line, followed by the array A in the next line.

Output
For each test case, print the required answer in one line.

Constraints
1 <= T <= 10
1 <= K, Ai <= 1000
1 <= N <= 1000

Input:
1
3 4
1 2 3

Output:
7

*/

#include <bits/stdc++.h>
#define max(a,b) (a>b)?a:b
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
		//freopen("in01.txt", "r", stdin);
		//freopen("out01.txt", "w", stdout);
	#endif
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        vector<int> p(1025,0);
        vector<int> temp(1025,0);
        //p[0]=1;
        //temp[0]=1;
        p[k]=1;
        temp[k]=1;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            p=temp;
            for(int j=0;j<1025;j++){
                if(p[j])temp[j^x]=1;
            }
        }
        p=temp;
        int ma=0;
        for(int i=0;i<1025;i++)if(p[i])ma=max(ma,i);
        printf("%d\n",ma);
    }
    return 0;
}
