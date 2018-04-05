T=int(input())
for t in range(T):
    n, k = [int(i) for i in input().split(" ")]
    A = [int(i) for i in input().split(" ")]

    if len(set(A))==1:
        print('YES')
        continue
    elif len(set(A))==2:
        A.sort()
        if A[0]==A[-2] or A[1]==A[-1]:
            print('YES')
            continue
        Y = max(set(A))
        X = min(set(A))
        if (Y-X)%k == 0 and ((Y-X)//k)%2==0 and ((Y-X)//k)//2 == X:
            print('YES')
            continue
    print('NO')
