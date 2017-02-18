import math
n=int(input())
if n==1 or n==2:
    print(-1)
else:
    if n%2:
        print(int((((n*n-1)/2))),int(((n*n+1)/2)))
    else:
        print(int(((n*n-4)/4)),int((n*n+4)/4))
