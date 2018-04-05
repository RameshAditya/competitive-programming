'''input
7
URRRUUU
'''
n=int(input())
s=input()

ans=0
curx=0
cury=0
reg='-'
if s[0]=='R':
	reg='L'
	curx+=1
else:
	reg='U'
	cury+=1
for i in s[1:]:
	if i=='U':
		if (reg=='-' or reg=='L') and cury+1>curx:
			ans+=1
			reg='U'
		cury+=1
	elif i=='R':
		if reg=='U' and curx+1>cury:
			ans+=1
			reg='L'
		curx+=1
print(ans)
