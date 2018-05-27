#A = [int(i) for i in input().split(" ")]
#A = [i+1 for i in range(6)]
#dp = [[-1 for i in range(len(A)+1)] for j in range(10*(len(A)+1))]

def f(cur, i):
    global A
    global dp
    if dp[cur][i]!=-1:
        return dp[cur][i]
    if i==len(A):
        dp[cur][i] = abs(sum(A) - 2*cur)
        return abs(sum(A)-2*cur)%10**7
    dp[cur][i] = (f(cur+A[i], i+1) + f(cur, i+1))%10**7
    return dp[cur][i]%10**7

T = int(input())
#x = f(0, 0)
#print(dp[0][0])
for t in range(T):
    n = int(input())
    A = [int(i) for i in input().split(" ")]
    dp = [[-1 for i in range(len(A)+1)] for j in range(10*(len(A)+1))]
    x=f(0,0)
    print(dp[0][0]%(10**7))
