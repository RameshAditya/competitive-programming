n, k = [int(i) for i in input().split(" ")]
A = [int(i) for i in input().split(" ")]

mx=0
mxval=0
for i in range(k):
    if A[i]*(n//A[i])>mxval:
        mxval = A[i]*(n//A[i])
        mx = i
print(mx+1, n//A[mx])
