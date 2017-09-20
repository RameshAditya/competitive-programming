n,m=[int(i) for i in input().split(" ")]
A=[int(i) for i in input().split(" ")]
for x in range(m):
    B=[i for i in A]
    l,r,x=[int(i) for i in input().split(" ")]
    init=B[x-1]
    C=B[:l]
    X=B[l-1:r]
    X.sort()
    D=B[r:]
    print(C,X,D)
    for i in X:
        C.append(i)
    for i in D:
        C.append(i)
    print(l,r,x,C)
    print('Yes') if C[x-1]==init else print('No')
    
