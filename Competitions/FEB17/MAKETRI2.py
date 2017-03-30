n,l,r=map(int,input().split(" "))
A=list(map(int,input().split(" ")))
state=[0]*n
ct=0
for i in range(l-1,r):
    if state[i]==0:
        for j in range(n):
            for k in range(j+1,n):
                if i==j or i==k or j==k:
                    continue
                else:
                    if A[i]+A[j]>A[k] and A[j]+A[k]>A[i] and A[i]+A[k]>A[j]:
                        state[i]=1
                        state[j]=1
                        state[k]=1
                        k=n
for i in range(l-1,r):
    if state[i]:
        ct+=1
print(ct)
