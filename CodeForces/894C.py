n=int(input())
A=[int(i) for i in input().split(" ")]
mi=min(A)
ok=1
for i in A:
    if i%mi:
        print(-1)
        ok=0
        break
if ok:
    print(2*n - 1)
    print(A[0], end=' ')
    for i in range(1,n):
        print(mi,A[i],end=' ')
