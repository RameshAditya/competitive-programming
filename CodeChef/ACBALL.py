def dist(A,B):
    ct=0
    for i in range(len(A)):
        if A[i]!=B[i]:
            ct+=1
    return ct
def invert(A):
    s=''
    for i in A:
        if i=='W':
            s+='B'
        else:
            s+='W'
    return s
        
T=int(input())
for t in range(T):
    A=input()
    B=input()
    s3=invert(A)
    s4=invert(B)
    if dist(s3,A)+dist(s3,B)>dist(s4,A)+dist(s4,B):
        print(s3)
    elif dist(s3,A)+dist(s3,B)==dist(s4,A)+dist(s4,B):
        print(s4) if s4.index('B')<s3.index('B') else print(s3)
    else:
        print(s4)
