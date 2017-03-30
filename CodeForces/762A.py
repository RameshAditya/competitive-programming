import math
n,k=map(int,input().split(" "))
A=[]
for i in range(1,int(math.sqrt(n)+1)):
    if n%i==0:
        A.append(i)
if k<=len(A):
    print(A[k-1])
elif k<=2*len(A):
    print(n//A[k-len(A)-1])
else:
    print(-1)
