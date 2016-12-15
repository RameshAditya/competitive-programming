N=int(input())
A=[]
for i in range(N):
    A.append(input().split(' '))
for i in range(len(A)):
    a=A[i][0]
    b=A[i][1]
    ac=int(str(a)[::-1])
    bc=int(str(b)[::-1])
    sum=0
    sum=ac+bc
    while sum%10==0:
        sum/=10
    print(str(int(sum))[::-1])
