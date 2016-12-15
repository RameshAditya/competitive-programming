def dash(A):
    B=A
    ct=0
    while(B>0):
        if(B%2)==1:
            ct+=1
        B=B//2
    return ct
def convert(B):
    a=0
    ans=0
    for i in B[::-1]:
        ans+=int(i)*(2**a)
        a+=1
    return ans
T=int(input())
for t in range(T):
    s=input().split(" ")
    N=int(s[0])
    A=int(s[1])
    B=int(s[2])
    na=dash(A)
    nb=dash(B)
    sa=''
    sb=''
    f=''
    for i in range(N-na):
        sa+='0'
    for i in range(na):
        sa+='1'
    for i in range(N-nb):
        sb+='0'
    for i in range(nb):
        sb+='1'
    print(sa,sb)
    if na>nb:
        san=convert(sa[::-1])
        sbn=convert(sb)
    else:
        san=convert(sa)
        sbn=convert(sb[::-1])
    print(san,sbn)
    print(str(san^sbn)[:N])
