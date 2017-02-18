T=int(input())
for t in range(T):
    A=[]
    n=int(input())
    for N in range(n):
        A.append(input())
    A.sort()
    f=0
    for i in range(len(A)-1):
        if len(A[i])<len(A[i+1]):
            if A[i] in A[i+1][:len(A[i])]:
                f=1
                break
    print("NO") if f else print("YES")
