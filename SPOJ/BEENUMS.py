import math
n=int(input())
while n!=-1:
    if (math.sqrt((4*n-1)/3))**2==(4*n-1)//3:
        print("Y")
    else:
        print("N")
    n=int(input())
