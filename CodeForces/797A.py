import math
n,c=map(int,input().split(" "))
A=[]
k=0
for i in range(2,int(math.sqrt(n))+1):
    if c==k-1:
        break
    if n%i==0:
        k+=1
        A.append(i)
        n/=i
A.append(n)
if len(A)!=c:
    print(-1)
else:
    print(A,sep=' ')
