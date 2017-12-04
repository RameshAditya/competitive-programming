n,m,k=[int(i) for i in input().split(" ")]
A=[int(i) for i in input().split(" ")]
sums=[]
init=0
for i in range(m):
    init+=A[i]
sums.append(init)
for i in range(m,n):
    sums.append(sums[i-m]-A[i-m]+A[i])
sums.sort(reverse=True)
print(sum(sums[:k]))
