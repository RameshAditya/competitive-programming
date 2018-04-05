'''input
3
1 2 3
'''

n=int(input())
A=[int(i) for i in input().split(" ")]

dp=[1]*n

for i in range(1,n):
	if A[i]>A[i-1]:
		dp[i]=dp[i-1]+1
	else:
		dp[i]=1
print(max(dp))