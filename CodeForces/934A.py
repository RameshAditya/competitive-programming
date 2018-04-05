'''input
5 2
-1 0 1 2 3
100 100
'''
n, m =[int(i) for i in input().split(" ")]
A=[int(i) for i in input().split(" ")]
B=[int(i) for i in input().split(" ")]
C=[]
maxval=A[0]*B[0]
ind=0
ct=0
for i in range(n):
	for j in range(m):
		if A[i]*B[j]>maxval:
			maxval=A[i]*B[j]
			ind=i
res=A[0]*B[0]
if ind==0:
	res=A[1]*B[0]
for i in range(n):
	for j in range(m):
		if i!=ind:
			res=max(res, A[i]*B[j])

print(res)