'''input
6
'''
n = int(input())
c=0
for i in range(n):
	for j in range(i+1,n):
		for k in range(j+1,n):
			c+=1
print(c)