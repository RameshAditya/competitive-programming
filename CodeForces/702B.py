n = int(input())
A = [int(i) for i in input().split(" ")]

p=[0]*31

p[0]=1
p[1]=2

for i in range(2,31):
	p[i]=2*p[i-1]
