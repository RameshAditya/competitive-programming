def one():
    return [9,8,7,4,3,1,0]
def two():
    return [8,0]
def three():
    return [9,8]
def four():
    return [9,8]
def five():
    return [9,8,6]
def six():
    return [8]
def seven():
    return [9,8]
def eight():
    return []
def nine():
    return [8]
def zero():
    return []
T=int(input())
for t in range(T):
    n,m=map(int,input().split(" "))
    n=list(str(n))
    m=list(str(m))
    ct=len(n)-1
    res=0
    for i in n:
        if i=='1':
            t=one()
        elif i=='2':
            t=two()
        elif i=='3':
            t=three()
        elif i=='4':
            t=four()
        elif i=='5':
            t=five()
        elif i=='6':
            t=six()
        elif i=='7':
            t=seven()
        elif i=='8':
            t=eight()
        elif i=='9':
            t=nine()
        else:
            t=zero()
        if len(t)>0:
            x=0
            while res+10**ct*t[x]>int(''.join(m)):
                x-=1
            res+=10**ct*t[x]
            ct-=1
    print(res)
