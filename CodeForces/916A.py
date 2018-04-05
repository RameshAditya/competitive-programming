'''input
34
09 24
'''

def lucky(h,m):
	return '7' in str(h) or '7' in str(m)

x=int(input())
h,m=[str(i) for i in input().split(" ")]
c=0
while not lucky(h,m):
	if int(m)<x:
		h=int(h)-1
		h%=24
		h=str(h)
		m=int(m)
		m-=int(x)
		m+=60
		m=str(m)
		#t=60-x
		#m=str(t)
	else:
		m=int(m)
		m-=x
		m=str(m)
	c+=1
	#print(h,m)
print(c)