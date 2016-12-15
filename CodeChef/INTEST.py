s=input().split(" ")
n=int(s[0])
k=int(s[1])
ct=0
for i in range(n):
	x=int(input())
	if x%k==0:
		ct+=1
print(ct)
