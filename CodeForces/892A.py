n=int(input())
A=[int(i) for i in input().split(" ")]
B=[int(i) for i in input().split(" ")]
x=sum(A)
B.sort()
if n==1:
    print('NO')
elif B[n-1]+B[n-2]>=x:
    print('YES')
else:
    print('NO')
