T=int(input())
for i in range(T):
    n=input()
    A=[]
    for i in n:
        A.append(i)
    if len(n)==1:
        print(int(n)+1)
    elif n==n[::-1]:
        if len(n)%2==1:
            int(A[(len(n)+1)//2])+=1
        else:
            int(A[len(n)//2])+=1
        print(A)
    else:
        while n!=n[::-1]:
            n=str(int(n)+1)
        print(n)
        
