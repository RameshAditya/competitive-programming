n=int(input())
A=[0]*1000001
B=[int(i) for i in input().split(" ")]
for i in B:
    A[i]+=1
lo=1
hi=1000000
t=0
while n>0:
    if A[lo]:
        n-=1
    if n==0:
        break
    if A[hi]:
        n-=1
    if n==0:
        break
    lo+=1
    hi-=1
    t+=1
    #print(lo,hi)
print(t)
