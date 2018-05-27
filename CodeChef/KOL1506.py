n, k = [int(i) for i in input().split(" ")]
A = [int(i) for i in input().split(" ")]

res = 0

for i in range(n):
    for j in range(n):
        res += pow(abs(A[i]-A[j]),k,)

print(res)
