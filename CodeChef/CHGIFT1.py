def f(cur, val):
    global A, n
    if cur==n:
        return val
    else:
        return min(f(cur+1, val-A[cur]), f(cur+1, val*A[cur]), f(cur+1, val+A[cur]))

T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    print(f(1, A[0]))
