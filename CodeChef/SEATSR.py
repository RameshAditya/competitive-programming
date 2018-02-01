T=int(input())
for t in range(T):
    s1=input()
    s2=input()
    a, b, k=[int(i) for i in input().split(" ")]

    len1=len(s1)
    len2=len(s2)
    
    dp=[[1000001 for i in range(len2+1)] for j in range(len1+1)]
    
    for i in range(len1+1):
        for j in range(len2+1):
            if abs(j-i)<=k:
                if i==0:
                    dp[i][j]=j
                elif j==0:
                    dp[i][j]=i
                elif s1[i-1]==s2[j-1]:
                    dp[i][j]=dp[i-1][j-1]
                else:
                    dp[i][j]=min(a+dp[i-1][j], a+dp[i][j-1], b+dp[i-1][j-1])
    print(dp[len1][len2]) if dp[len1][len2]<k else print(-1)
