n,k,p=map(int,input().split(" "))
A=list(map(int,input().split(" ")))
s=input()
for ss in s:
    if ss=='!':
        temp=A[len(A)-1]
        for i in range(len(A)-1,0,-1):
            A[i]=A[i-1]
        A[0]=temp
    if ss=='?':
        ans=0
        for i in range(len(A)):
            j=0
            ct=0
            while(i+j<len(A) and j<k):
                if A[i+j]==1:
                    ct+=1
                j+=1
            ans=max(ans,ct)
        print(ans)
