T=int(input())
for t in range(T):
    n=int(input())
    res=200
    for i in range(n):
        a=input()
        res=min(res, a.count('a'), a.count('b'))
    print(res)
