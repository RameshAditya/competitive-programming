T=int(input())
for t in range(T):
    l,d,s,c=map(int,input().split(" "))
    L=s
    for D in range(d):
        L=(c+1)*L        
    if L>=l:
        print("ALIVE AND KICKING")
    else:
        print("DEAD AND ROTTING")
