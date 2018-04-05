'''input
4
82 94 6
56 67 4
28 59 9
39 74 4
'''

def f(x):
	if x<10:
		return x
	else:
		ans=0
		while x>=10:
			a=1
			for i in str(x):
				if i!='0':
					a*=int(i)
			x=a
		return x

T=int(input())
for t in range(T):
	a,b,x=[int(i) for i in input().split(" ")]
	ct=0
	for i in range(a,b+1):
		#print(i,f(i))
		if f(i)==x:
			ct+=1
	print(ct)