n, q = [int(i) for i in input().split(" ")]
A = [int(i) for i in input().split(" ")]

pref = [[0 for i in range(31)] for j in range(n+1)]

for i in range(len(A)):
    for j in range(31):
        pref[i+1][j] = pref[i][j] + ((A[i]>>j)&1)

for qq in range(q):
    l, r = [int(i) for i in input().split(" ")]
    pos=[0 for i in range(31)]

    for i in range(31):
        pos[i] = pref[r][i] - pref[l-1][i]
    res = 0
    for i in range(30,-1,-1):
        if (r-l+1)%2==0:
            if pos[i]>=(r-l+1)//2:
                res+=0
            else:
                res+=(1<<i)
        else:
            if pos[i]>=(r-l+1)/2:
                res+=0
            else:
                res+=(1<<i)
    print(res)
