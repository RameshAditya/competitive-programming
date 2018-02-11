n=int(input())
A=[int(i) for i in input().split(" ")]
A.sort()

ct=0
i=0
while i<n:
    if i+1<n and abs(A[i]-A[i+1])<=2:
        ct+=1
        i+=2
    else:
        ct+=1
        i+=1
print(ct)
