'''def binarysearch(A,element):
    l=0
    u=len(A)-1
    f=0
    while l<=u and not f:
        mid=l+(u-l)//2
        if element==A[mid]:
            f=1
        elif element>A[mid]:
            l=mid+1
        else:
            u=mid-1
    return f
#logn'''
n=int(input())
A=[]
B=[]
C=[]
D=[]
possab=[]
posscd=[]
for i in range(n):
    a,b,c,d=map(int,input().split(" "))
    A.append(a)
    B.append(b)
    C.append(c)
    D.append(d)
for i in range(n):
    for j in range(n):
        possab.append(A[i]+B[j])
        posscd.append(C[i]+D[j])
#n^2
posscd.sort()
#nlogn
ans=0
for i in range(len(possab)):
    if -1*possab[i] in posscd:
        ans+=1
#n^2
print(ans)
