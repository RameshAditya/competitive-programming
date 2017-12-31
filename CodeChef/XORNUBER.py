def nob(x):
    ct=0
    while x:
        x>>=1
        ct+=1
    return ct

T=int(input())
for t in range(T):
    n=int(input())
    if n==1:
        print(2)
    elif ((n+1)&(n))!=0:
        print(-1)
    else:
        print(2**(nob(n)-1)-1)
