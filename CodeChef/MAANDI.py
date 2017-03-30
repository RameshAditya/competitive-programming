import math
def isvalid(x):
    if '4' in set(str(x)) or '7' in set(str(x)):
        return 1
    return 0

T=int(input())
for t in range(T):
    x=int(input())
    res=0
    for i in range(1,int(math.sqrt(x))+1):
        if x%i==0 and isvalid(i):
            res+=1
        if x%i==0 and isvalid(x//i) and i*i!=x:
            res+=1
    print(res)
