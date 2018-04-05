import random
T=10
print(T)
for t in range(T):
    n=random.randint(2,100)
    m=random.randint(2,100)

    print(n,m)
    for i in range(n):
        for j in range(m):
            if random.randint(1,4)>1:
                print('.',end='')
            else:
                print('*',end='')
            if j!=m-1:
                print(' ',end='')
        print()
