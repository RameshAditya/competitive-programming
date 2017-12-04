A=[int(i) for i in input().split(" ")]
A.sort()
if len(set(A))==1:
    print(2*A[0])
else:
    if A[1]==A[2]:
        print(A[0]+A[3]+A[4])
