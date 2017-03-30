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
A.sort()
i=0
while i<(len(A)-2):
    for j in range(i+2,len(A)):
        a=min(A[i]+A[j],R)
        b=max(A[j]-A[i],L)
        ct+=(a-b)
        i=a
print(ct)

