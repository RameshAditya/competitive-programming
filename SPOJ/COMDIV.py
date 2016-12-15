import math
def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)
def nod(x):
    ct=0
    for i in range(1,int(math.sqrt(x))+1):
        if x%i==0 and i*i!=x:
            ct+=2
        if i*i==x:
            ct+=1
    return ct
T=int(input())
for t in range(T):
    s=input().split(" ")
    A=[]
    for i in s:
        if i.isdigit():
            A.append(int(i))
    print(nod(gcd(A[0],A[1])))
