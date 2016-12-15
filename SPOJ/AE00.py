import math
n=int(input())
ct=0
for i in range(1,int(math.sqrt(n))+1):
    for j in range(i,n+1):
        if i*j<=n:
            ct+=1
        else:
            continue
print(ct)
