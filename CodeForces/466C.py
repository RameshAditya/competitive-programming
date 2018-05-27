n = int(input())
A = [int(i) for i in input().split(" ")]
val = sum(A)//3
if sum(A)%3 != 0:
    print(0)
else:
    pref = [0]*n
    pref[0] = A[0]
    for i in range(1,n):
        pref[i] = A[i] + pref[i-1]

    ones = 0
    twos = 0
    threes = 0

    f1 = 1
    f2 = 1

    for i in range(n):
        if f1 and pref[i]==val and i<=n-3:
            ones+=1
        elif f2 and pref[i]==2*val and i<=n-2:
            twos+=1
            f1 = 0
        elif pref[i] == 3*val and i<=n-1:
            threes+=1
            f2 = 0
    #print(ones, twos, threes)
    print(ones*twos*threes)
