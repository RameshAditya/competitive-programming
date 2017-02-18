suffixes=["UB","UB","MB","MB","LB","LB","SL","SU"]
convert=[3,6,2,5,1,4,7,0]
ordered=["SU","LB","MB","UB","LB","MB","UB","SL"]
def findblock(n):
    global ordered
    s=''
    s+=str(n)+ordered[n%8]
    return s
def rightdigit(a):
    n=a%8
    if n>=1 and n<=3:
        return a+3
    elif n==7:
        return a+1
    elif n==0:
        return a-1
    else:
        return a-3
def findpartner(stringofblock):
    global convert,suffixes
    n=''
    w=''
    for i in stringofblock:
        if i.isdigit():
            n+=i
    w+=str(rightdigit(int(n)))
    w+=suffixes[convert.index(int(n)%8)^1]
    return w
for t in range(int(input())):
    n=int(input())
    print(findpartner(findblock(n)))
 
