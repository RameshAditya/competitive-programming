'''input
5 5 5
'''

l, r, a = [int(i) for i in input().split(" ")]
while a:
	if l<r:
		l+=1
		a-=1
	else:
		r+=1
		a-=1
A = []
A.sort()
print(min(l,r)*2)