T=int(input())
for t in range(T):
    A=list(map(float,input().split(" ")))
    s=sum(A)/2
    print(format(((s-A[0])*(s-A[1])*(s-A[2])*(s-A[3]))**0.5,'.2f'))
