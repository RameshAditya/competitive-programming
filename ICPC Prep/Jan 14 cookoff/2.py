def gcd(a,b):
    if b==0:
        return 0
    return 1+gcd(a,a%b)

T=int(input())
for t in range(T):
    n=int(input())
    p=[0]*n
    opp=0
    for i in range(n):
        x,y=[int(i) for i in input().split(" ")]
        if max(x,y)!=2 and min(x,y)!=1 and max(x,y)//min(x,y)>1:
            opp+=1
        else:
            p[i]=gcd(max(x,y),min(x,y))%2
    #print('a',*p)
    if (sum(p))&1 and opp%2==0:
        print('YES')
    elif sum(p)%2==0 and opp&1:
        print('YES')
    else:
        print('NO')
