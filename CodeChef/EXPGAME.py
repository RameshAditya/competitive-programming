take=[1,4,27,256,3125,46656]
def mex(A):
    A.sort()
    for i in range(10):
        if i not in A:
            return i

G=[0]*(100005)
for i in range(100005):
    temp=[]
    j=0
    while j<len(take) and take[j]<=i:
        temp.append(G[i-take[j]])
        j+=1
    G[i]=mex(temp)
    
T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    ans=0
    for i in A:
        ans^=G[i]
    if ans==0:
        print('Head Chef')
    else:
        print('Little Chef')
