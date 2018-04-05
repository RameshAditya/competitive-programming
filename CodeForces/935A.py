n=int(input())
A=[]
for i in range(1,int(n**0.5) + 1):
	if n%i==0:
		A.append(i)
		if i*i!=n:
			A.append(n//i)
print(len(A)-1)