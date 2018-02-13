T=int(input())
for t in range(T):
    n, k = [int(i) for i in input().split(" ")]
    A = [int(i) for i in input().split(" ")]
    longest=0
    cur=0
    ptr=0
    for i in range(0, n+1):
        if longest<abs(A[ptr]-i):
            longest=abs(A[ptr]-i)
            cur=i
        if ptr+1<k and abs(A[ptr]-i)>abs(A[ptr+1]-i):
            ptr+=1
    if cur!=0:
        print(longest//2)
    else:
        print(longest)
