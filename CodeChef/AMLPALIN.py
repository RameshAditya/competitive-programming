T=int(input())
for t in range(T):
    N=int(input())
    ctaa=0
    ctab=0
    ctba=0
    ctbb=0
    ans=''
    revans=''
    for n in range(N):
        s=input()
        if s=="aa":
            ctaa+=1
        elif s=="ab":
            ctab+=1
        elif s=="ba":
            ctba+=1
        elif s=="bb":
            ctbb+=1
    if ctab==0 and ctba==0 and ctbb==0:
        print("aa"*ctaa)
    else:
        ans+="aa"*(ctaa//2)
        ans+="ab"*min(ctab,ctba)
        ans+="bb"*(ctbb)
        ans+="ba"*min(ctab,ctba)
        ans+="aa"*(ctaa//2)
        print(ans)
