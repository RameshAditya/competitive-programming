n=int(input())
A=[int(i) for i in input().split(" ")]
for i in range(n):
    A[i]-=1
c=0
for i in range(n):
    if i==A[A[A[i]]]:
        c=1
if c:
    print('YES')
else:
    print('NO')
