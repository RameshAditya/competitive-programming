T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i)%4 for i in input().split(" ")]
    ans=0
    A.sort()
