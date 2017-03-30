def A(L,i,a,b,c):
    for j in range(i,len(L)):
        L[j]+=a
    return L
def R(L,i,a,b,c):
    for j in range(i,(len(L)-1+i)//2):
        L[j],L[len(L)-1-j]=L[len(L)-1-j],L[j]
    return L
def M(L,i,a,b,c):
    for j in range(i,len(L)):
        L[i]*=b
    return L
def mod(L,a,b,c):
    for i in range(len(L)):
        L[i]%=c
    return L
T=int(input())
for t in range(T):
    n=int(input())
    L=list(map(int,input().split(" ")))
    a,b,c=map(int,input().split(" "))
    s=input()
    for i in range(len(s)):
        if s[i]=='A':
            L=A(L,i,a,b,c)
        elif s[i]=='R':
            L=R(L,i,a,b,c)
        elif s[i]=='M':
            L=M(L,i,a,b,c)
    L=mod(L,a,b,c)
    for i in L:
        print(i,end=' ')
    print()
