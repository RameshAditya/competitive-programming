n=int(input())
for N in range(n):
    x=int(input())
    f=0
    for i in range(35):
        for j in range(35):
            if 3*i + 7*j == x:
                f=1
                break
    if f:
        print('YES')
    else:
        print('NO')
    
