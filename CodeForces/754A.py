n=int(input())
flag=0
A=list(map(int,input().split(" ")))
if A.count(0)==len(A):
    flag=1
start=0
end=0
if not flag:
    print("YES")
    print(n-A.count(0))
i=0
while i<(len(A)-1):
    if A[i]!=0:
        cpy=i+1
        while A[cpy]==0 and cpy<len(A):
            cpy+=1
        start=i+1
        end=cpy+1
        print(start,end)
    if A[i]==0:
        cpy=i
        while A[cpy]==0 and cpy>=0:
            cpy-=1
        if A[cpy]!=0:
            start=cpy
            end=i+1
        if i==0:
            cpy=i+1
            while A[cpy]==0 and cpy<len(A):
                cpy+=1
            if A[cpy]!=0:
                start=i+1
                end=cpy+1
                i=cpy
        print(start,end)
if A[n-1]!=0 and end!=n:
    print(n,n)
if flag:
    print("NO")
