T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    print(n-max(A))
