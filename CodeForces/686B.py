n=int(input())
A=[int(i) for i in input().split(" ")]

for i in range(n):
    for j in range(n-1):
        if A[j]>A[j+1]:
            print(j+1,j+2)
            A[j],A[j+1]=A[j+1],A[j]
