def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)
T=int(input())
for t in range(T):
    s=input().split(" ")
    A=[]
    for i in s:
        if i.isdigit():
            A.append(int(i))
    a=A[0]
    b=A[1]
    x=b//gcd(a,b)
    y=a//gcd(a,b)
    print(x,y)
