import math
dp=[]
B=[]
for i in range(1000001):
    dp.append(0)
dp[0]=1
dp[1]=1
dp[2]=2
dp[3]=2
dp[4]=3
dp[5]=2
def nof(x):
    if dp[x]!=0:
        return int(dp[x])
    else:
        ct=0
        for i in range(1,int(math.sqrt(x))+1):
            if i*i==x:
                ct+=1
            elif x%i==0:
                ct+=2
        dp[x]=ct
        return int(dp[x])
T=int(input())
for t in range(T):
    N=int(input())
    s=input().split(" ")
    A=[]
    for i in s:
        A.append((int(i)))
    ans=1
    for i in A:
        ans*=(nof(i))
    print(ans)
    
