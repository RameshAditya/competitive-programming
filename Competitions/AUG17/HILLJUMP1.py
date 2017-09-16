#Segment tree for 100?
n,q=[int(i) for i in input().split(" ")]
A=[int(i) for i in input().split(" ")]
for q0 in range(q):
    qu=[int(i) for i in input().split(" ")]
    if qu[0]==1:
        i=qu[1]
        k=qu[2]
        curmax=A[i]
        for j in range(i-1,n):
            if k>0:
                if A[j]>curmax:
                    k-=1
                    curmax=A[j]
            if k==0:
                break
        print(j)
    else:
        for i in range(qu[1]-1,qu[2]):
            A[i]+=qu[3]
    
