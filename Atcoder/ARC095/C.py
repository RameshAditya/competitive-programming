n = int(input())
A = [int(i) for i in input().split(" ")]
B=A[:]
B.sort()
for i in range(n):
    if A[i]<=B[n//2 - 1]:
        print(B[n//2])
    else:
        print(B[n//2-1])
