T=int(input())
for t in range(T):
    n,k=map(int,input().split(" "))
    A=list(map(int,input().split(" ")))
    A.sort()
    ct=0
    unique=[]
    for i in A:
        if i not in unique:
            unique.append(i)
    for i in range(n//k):
        ct+=k-A.count(unique[i])
    print(ct)
    
        
