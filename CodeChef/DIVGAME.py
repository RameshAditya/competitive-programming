import math
for t in range(int(input())):
    n=int(input())
    ispr=1
    if n==2 or n==17:
        print('Mike')
    elif n==3 or n==16 or n==34 or n==289:
        print('Tom')
    else:
        for i in range(2,int(math.sqrt(n))+1):
            if n%i==0:
                ispr=0
        print('Tom') if ispr else print('Mike')
