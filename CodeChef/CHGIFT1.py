def rec(A,ptr,res):
    if(ptr==0):
        res=A[ptr]
    if(ptr==len(A)):
        return res
    elif ptr<len(A)-1:
        return min(rec(A,ptr+1,res+A[ptr+1]),rec(A,ptr+1,res-A[ptr+1]),rec(A,ptr+1,res*A[ptr+1]))
    elif ptr==len(A)-1 and ptr!=0:
        return min(res+A[ptr],res-A[ptr],res*A[ptr])
T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    print(rec(A,0,0))
    
