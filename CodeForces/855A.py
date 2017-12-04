n=int(input())
x=[]
for N in range(n):
    s=input()
    x.append(s)
    ok=0
    for j in range(N):
        if x[N]==x[j]:
            ok=1
    if ok:
        print('YES')
    else:
        print('NO')
