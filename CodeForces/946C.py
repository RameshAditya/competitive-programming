'''input
zxzxzxzxzxzxzxzx
'''

s = input()

score = 0

if len(s)<26:
	print(-1)
else:
	done = 0
	ok = 0
	ans=''
	for i in range(len(s)):
		if s[i]<=chr(done+ord('a')):
			ans+=chr(done+ord('a'))  
			done+=1
		else:
			ans+=s[i]
		if done==26:
			ok=1
		done%=26
	if not ok:
		print(-1)
	#for i in range(26,len(s)):
	#	print(s[i],end='')
	else:
		print(ans)