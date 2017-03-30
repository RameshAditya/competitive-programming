s=input()
flag1=0
flag2=0

for i in s:
    if i.isdigit() and flag1==0:
        flag1=1
        N=int(i)
    elif i.isdigit() and flag1==1 and flag2==0:
        flag2=1
        L=int(i)
    elif i.isdigit() and flag2==1:
        R=int(i)
        
x=input()
A=[]
for i in x:
    if i.isdigit():
        A.append(int(i))
ct=0
for i in range(L-1,R):
    flag=0
    for j in range(len(A)-1):
        if i!=j:
            for k in range(j+1,len(A)):
                if k!=i and k!=j and flag==0:
                    if A[i]+A[j]>A[k] and A[i]+A[k]>A[j] and A[j]+A[k]>A[i]:
                        ct+=1
                        flag=1
                        #print(A[i],A[j],A[k])
                if flag==1:
                    break
print(ct)
