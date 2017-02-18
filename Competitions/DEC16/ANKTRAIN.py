def partner(index):
    return index^1
T=int(input())
TP=["3UB","6UB","2MB","5MB","1LB","4LB","7SL","8SU"]
Berth=["1LB", "2MB", "3UB", "4LB", "5MB", "6UB", "7SL", "8SU"]
for t in range(T):
    N=int(input())
    s=''
    actual=''
    if N%8==0:
        cn=N//8
        s+='8'
        s+='SU'
        actual+=str(N)
    else:
        cn=N//8 + 1
        s+=str(N%8)
        s+=str(Berth[N%8 - 1][1:])
        actual+=str(N)
        actual+=str(Berth[N%8 - 1][1:])
    #print(s)
    #print(actual)
    bn=partner(TP.index(s))
    print(TP[bn])
    #print(actual[0]+bn[1:])
