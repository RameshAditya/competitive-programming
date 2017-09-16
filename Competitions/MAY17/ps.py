n=int(input())
A=[]
for i in range(1,2**n):
    B=[]
    for j in range(n):
        if i&(1<<j):
            B.append(j+1)
    A.append(B)
for i in A:
    print(i)
