def hcf(g,s):
    if g<s:
        g,s=s,g
    if g%s==0:
        return s
    else:
        return hcf(s,g%s)
T=int(input())
for t in range(T):
    s=input().split(" ")
    A=[]
    flag=0
    for i in range(1,len(s)):
        A.append(int(s[i]))
    for i in range(len(A)-2):
        if hcf(A[i],A[i+1])!=hcf(A[i+1],A[i+2]):
            flag=1
    if flag==1:
        for i in range(len(A)):
            print(A[i],end=' ')
    else:
        for i in range(len(A)):
            print(A[i]//hcf(A[0],A[1]),end=' ')
