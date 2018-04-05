'''input
1
w
'''
def vowel(a):
	if 'a' in a or 'e' in a or 'i' in a or 'o' in a or 'u' in a or 'y' in a:
		return True
	return False

def nov(s):
	global v
	c=0
	for i in s:
		if i in v:
			c+=1
	return c

n=int(input())
s=input()
v='aeiouy'
if n==1:
	print(s)
	
while nov(s)>1:
	for i in range(1,n):
		if s[i-1] in v and s[i] in v:
			s = s[:i] + s[i+1:]
if n!=1:
	print(s)