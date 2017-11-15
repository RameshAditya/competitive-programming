A=[int(i) for i in input().split(" ")]
flag=0
for i in range(len(A)):
    for j in range(i+1,len(A)):
        for k in range(j+1,len(A)):
            if A[i]+A[j]+A[k]==sum(A)-A[i]-A[j]-A[k]:
                flag=1
print("YES") if flag else print("NO")
