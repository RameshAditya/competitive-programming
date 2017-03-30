def G(a,b):
    if b==0:
        return a
    return G(b,a%b)
import math
def p(a):
    for i in range(2,int(math.sqrt(a)+1)):
        if a%i==0:
            return i
    return a      
T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    a=A[0]
    for i in range(1,n):
        a=G(a,A[i])
    #print(p(a))
    print(-1) if p(a)==1 else print(p(a))
