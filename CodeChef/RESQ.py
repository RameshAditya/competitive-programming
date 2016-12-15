import math
def factors(A):
    s=math.sqrt(A)    
    for i in range(int(s),0,-1):
        if A%i==0:
            return abs(A//i-i)

T=int(input())
for t in range(T):
    n=int(input())
    print(factors(n)) 
