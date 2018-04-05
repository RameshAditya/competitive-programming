'''input
35
'''

n=int(input())
s=''
while n>0:
	if n>=2:
		s+='8'
		n-=2
	elif n==1:
		s+='6'
		n-=1
if len(s)>18:
	print(-1)
else:
	print(s)