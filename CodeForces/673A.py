n=int(input())
A=[int(i) for i in input().split(" ")]
B=[0]
for i in A:
    B.append(i)
st=0

for i in range(n):
    if A[i]-st>15:
        break
    st=A[i]
print(st+15) if i!=n-1 else print(A[i])
