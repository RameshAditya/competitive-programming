ct=0
def pile(startindex,endindex,A):
    global ct
    minind=101
    ans=0
    A.sort(reverse=True)
    for i in range(startindex,endindex):
        minind=min(i+A[i],minind,endindex)
        if i==minind:
            ct+=1
            ans=i+1
    return i

n=int(input())
A=list(map(int,input().split(" ")))
i=0
while i<n:
    i=pile(i,n,A)
print(ct)
