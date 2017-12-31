T=int(input())
for t in range(T):
    n=int(input())
    A=[]
    for i in range(n):
        x=input()
        A.append(x)
    B=list(set(A))
    if A.count(B[0])>A.count(B[1]):
        print(B[0])
    elif A.count(B[0])==A.count(B[1]):
        print('Draw')
    else:
        print(B[1])
