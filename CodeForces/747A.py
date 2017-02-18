import math
def factorize(n):
    f=[]
    for i in range(1,int(math.sqrt(n))+1):
        if n%i==0:
            f.append(i)
            f.append(n//i)
    return f
n=int(input())
x=factorize(n)
d=n-1
a=0
b=0
for i in range(0,len(x)-1,2):
    if abs(x[i]-x[i+1])<=d:
        d=abs(x[i]-x[i+1])
        a=x[i]
        b=x[i+1]
print(a,b)
