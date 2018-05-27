n = int(input())
A = [int(i) for i in input().split(" ")]
A.sort()
k = A[-1]
x = 0
for i in range(n-1):
    if abs(k/2-A[x])>abs(k/2-A[i]):
        x = i
print(k, A[x])
