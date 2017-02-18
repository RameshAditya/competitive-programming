n=int(input())
A=list(map(int,input().split(" ")))
for i in range(len(A)-1):
    A[i]+=A[i+1]
for i in A:
    print(i,end=' ')
