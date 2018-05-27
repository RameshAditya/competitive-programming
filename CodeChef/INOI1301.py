def f(i):
    n = len(A)
    if i>=n:
        return 0
    if fm[i]!=-1:
        return fm[i]
    elif i+2<n:
        fm[i] = max(0, A[i+1] + f(i+1), A[i+2] + f(i+2))
        return fm[i]
    elif i+1<n:
        fm[i] = max(A[i+1] + f(i+1), 0)
        return fm[i]
    fm[i] = 0
    return 0

def b(i):
    if i<0:
        return 0
    if bm[i]!=-1:
        return bm[i]
    elif i-2>=0:
        bm[i] = max(A[i-1] + b(i-1), A[i-2] + b(i-2))
        return bm[i]
    elif i-1>=0:
        bm[i] = A[i-1] + b(i-1)
        return bm[i]
    bm[i] = 0
    return 0
n, k = [int(i) for i in input().split(" ")]
A = [int(i) for i in input().split(" ")]
fm = [-1]*n
bm = [-1]*n
print(f(k-1) + b(n-1))
