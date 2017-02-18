n,m=map(int,input().split(" "))
a=[]
for i in range(n):
    b=(input())
    a.append(b)
tot=0
H=[0]*n
V=[0]*m
for i in range(n):
    for j in range(m):
        if a[i][j]=='*':
            tot+=1
            H[i]+=1
            V[j]+=1
flag=0
for i in range(n):
    for j in range(m):
        if flag==0:
            if a[i][j]=='*':
                if tot+1==H[i]+V[j]:
                    print("YES")
                    print(i+1,j+1)
                    flag=1
                    break
            else:
                if tot==H[i]+V[j]:
                    print("YES")
                    print(i+1,j+1)
                    flag=1
                    break
if flag==0:
    print("NO")
