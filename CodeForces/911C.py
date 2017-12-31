x,y,z=[int(i) for i in input().split(" ")]
A=[x,y,z]
k=0
for i in A:
    if A.count(i)>=i:
        k=1
if k:
    print('YES')
else:
    print('NO')
