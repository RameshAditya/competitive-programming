def check(aux):
    for i in aux:
        if i==0:
            return 1
    return 0
n=int(input())
A=list(map(int,input().split(" ")))
aux=[0]*n

i=1
ct=0
while(check(aux)):
    c=i
    print(i,end=' ')
    aux[i]=1
    i=A[i-1]
    if i==c:
        i=A[i]
