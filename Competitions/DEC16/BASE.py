import math

def isone(i,b):
    n=int(math.log(i-i%b)/math.log(b))
    nl=(b**n)
    nh=nl<<1
    if i>=nl and i<nh:
        return 1
    else:
        return 0
'''def tobase(y,b):
    n=''
    x=y
    while(x>0):
        n+=str(x%b)
        x=x//b
    #return int(n[::-1])
    return n[len(n)-1]
'''
T=int(input())
for _ in range(T):
    t=int(input())
    c=1
    if t==0:
        print(0)
    elif t==1:
        print('INFINITY')
    elif t==2:
        print(1)
    else:       
        for i in range(2,t):
            if(tobase(t,i)=='1'):
               c+=1
            #print(tobase(t,i),'base',i,'of',t)
        print(c)

