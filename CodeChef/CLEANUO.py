T=int(input())
for t in range(T):
    n,m=map(int,input().split(" "))
    A=[]
    for i in range(n):
        A.append(i+1)
    s=input().split(" ")
    M=[]
    for i in s:
        M.append(int(i))
    for i in range(len(M)):
        A[M[i]-1]=0
    final=[]
    for i in range(n):
        if A[i]!=0:
            final.append(A[i])
    s1=''
    for i in range(len(final)):
        if i%2==0:
            s1+=str(final[i])+' '
    print(s1[:-1])
    s2=''
    for i in range(len(final)):
        if i%2==1:
            s2+=str(final[i])+' '
    print(s2[:-1])
