n=int(input())
while n!=0:
    flag=1
    A=list(map(int,input().split(" ")))
    #print(A)
    if n>1:
        for i in range(1,len(A)+1):
            if A[i-1]!=i and A[A[i-1]-1]!=i:    #not
                flag=0
                #print(i,A[i-1])
    print("ambiguous") if flag or len(A)==1 else print("not ambiguous")
    n=int(input())
