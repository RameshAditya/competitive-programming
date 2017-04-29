import math
T=int(input())
for t in range(T):
    a,b=map(int,input().split(" "))
    move=1
    ct=1
    lim=0
    bob=0
    while(a>=0 and b>=0):
        a-=ct
        if(a<0):
            lim=1
        b-=(ct+1)
        if b<0:
            bob=1
        ct+=2
    if(lim):
        print('Bob')
    else:
        print('Limak')
        
