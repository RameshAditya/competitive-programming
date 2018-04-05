'''input
2 3 1 5 6 7 8 9 4
'''
A=[int(i) for i in input().split(" ")]

def f(i,j):
	global A
	if j==1:
		return A[i]
	else:
		return f(A[i]-1, j-1)

for i in range(len(A)):
	print(f(i,5))
