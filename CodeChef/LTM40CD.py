r=int(input())
ct=0
A=[]
B=[]
C=[]
for a in range(1,5*r):
    for b in range(a,5*r):
        for c in range(b,5*r):
            s=(a+b+c)/3
            k=(s*(s-a)*(s-b)*(s-c))**0.5
            if r==k/s:
                ct+=1
                A.append(a)
                B.append(b)
                C.append(c)
print(ct)
for i in range(len(A)):
    print(A[i],B[i],C[i])
