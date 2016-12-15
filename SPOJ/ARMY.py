T=int(input())
for t in range(T):
    blank=input()
    ng,nm=map(int,input().split(" "))
    NG=list(map(int,input().split(" ")))
    NM=list(map(int,input().split(" ")))
    NGptr=0
    NMptr=0
    while NGptr<len(NG) and NMptr<len(NM):
        if NG[NGptr]>=NM[NMptr]:
            NMptr+=1
        else:
            NGptr+=1
    if NMptr==len(NM):
        print("Godzilla")
    elif NGptr==len(NG):
        print("MechaGodzilla")
