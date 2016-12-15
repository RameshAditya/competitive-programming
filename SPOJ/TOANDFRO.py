n=int(input())
while(n!=0):
    s=input()
    A=[]
    for i in range(len(s)//n):
        if i%2==0:
            A.append(s[i*n:i*n+n])
        else:
            A.append((s[i*n:i*n+n])[::-1])
    B=[]
    for i in range(len(s)//n):
        C=[]
        for j in A[i]:
            C.append(j)
        B.append(C)
    x=''
    for j in range(n):
        for i in range(len(s)//n):
            x+=B[i][j]    
    print(x)
    n=int(input())
