def solve(A,start,end,a,sum):
    if start==end:
        return sum+A[start]*a
    if A[start]<A[end]:
        return solve(A,start+1,end,a+1,sum+A[start]*a)
    else:
        return solve(A,start,end-1,a+1,sum+A[end]*a)
n=int(input())
A=[]
for N in range(n):
    A.append(int(input()))
print(solve(A,0,n-1,1,0))
