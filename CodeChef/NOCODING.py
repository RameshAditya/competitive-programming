res=1
def ans(x):
    global res
    for i in range(0,len(x)-1):
        #diff=abs(min(abs(ord(currentletter)-ord(x[i])),26-abs(ord(currentletter)-ord(x[i]))))
        if ord(x[i])<=ord(x[i+1]):
            diff=ord(x[i+1])-ord(x[i])
        else:
            diff=26-(ord(x[i])-ord(x[i+1]))
        res+=diff+1
    return res
T=int(input())
for t in range(T):
    s=input()
    print("YES") if ans(s)<=11*len(s) else print("NO")
    
