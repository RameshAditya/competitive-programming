T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    no=A.count(1)
    if(no%2)==1:
        print(no)
    else:
        print(A.count(0))
