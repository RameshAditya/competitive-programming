n,q=map(int,input().split(" "))
A=list(map(int,input().split(" ")))
for q0 in range(q):
    l,r,k=map(int,input().split(" "))
    hashmap=[0]*(max(A)+1)
    for i in range(l-1,r):
        hashmap[A[i]]+=1
    if max(hashmap)>=k:
        print(A[hashmap.index(max(hashmap))])
    else:
        print(-1)
