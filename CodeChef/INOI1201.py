n = int(input())
A=[]
B=[]
C=[]
for i in range(n):
    a, b, c = [int(i) for i in input().split(" ")]
    A.append(a)
    B.append(b)
    C.append(c)
ans = sum(A) + min([(B[i] + C[i]) for i in range(n)])
print(ans)
