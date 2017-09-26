A=[]
n=int(input())
for i in range(n):
    A.append(int(input()))
if len(set(A))==2 and A.count(min(A))==A.count(max(A)):
    print('YES')
    print(min(A),max(A))
else:
    print('NO')
