'''input
7 6
2 5 3 1 11 4 4
7 8 2 4 1 8
'''

n, m = [int(i) for i in input().split(" ")]
A = [int(i) for i in input().split(" ")]
B = [int(i) for i in input().split(" ")]
A.sort()

B.sort()

i = 0
j = 0

suma = 0
sumb = 0

ans = 0

for i in range(n):
	suma+=A[i]
	if suma==sumb:
		ans+=1
		suma=0
	while sumb<suma and j<m-1:
		sumb+=B[j]
		j+=1
		print(i,j)

print(ans)