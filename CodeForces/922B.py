n=int(input())
ct=0
for i in range(1,n+1):
    for j in range(i,n+1):
        k=i^j
        if k<=n and i+j>k and i+k>j and j+k>i:
            ct+=1
print(ct//3)
