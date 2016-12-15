T=int(input())
for t in range(T):
    n=int(input())
    A=[]
    s=input()
    for i in s:
        if i.isdigit():
            A.append(int(i))
    A.sort()
    mid=len(A)//2
    if A[0]==A[mid+1]:
        print("YES",A[0])
    elif A[len(A)-1]==A[mid-1]:
        print("YES",A[mid-1])
    else:
        print("NO")
