def checka(i,j,n,m,tank):
    flag=0 #safe is 0, 1 is unstable
    if i==0:
        if j>0:
            if tank[i][j-1]=='W':
                flag=1
        if j<m-1:
            if tank[i][j+1]=='W':
                flag=1
    if i>0:
        if tank[i-1][j]=='W' or tank[i-1][j]=='B':
            flag=1
    if flag:
        return False
    else:
        return True
def checkw(i,j,n,m,tank):
    flag=0
    if j==0 or j==m-1:
        flag=1
    if j>0:
        if tank[i][j-1]=='A':
            flag=1
    if j<m-1:
        if tank[i][j+1]=='A':
            flag=1
    if i>0:
        if tank[i-1][j]=='B':
            flag=1
    if flag:
        return False
    else:
        return True

T=int(input())
for t_ in range(T):
    n,m=map(int,input().split(" "))
    tank=[]
    for i in range(n):
        s=input()
        tank.append(list(s))
    #print(tank)
    flag=0
    for i in range(n):
        for j in range(m):
            if tank[i][j]=='A':
                if not checka(i,j,n,m,tank):
                    flag=1
            elif tank[i][j]=='W':
                if not checkw(i,j,n,m,tank):
                    flag=1
    print("no") if flag else print("yes")
    
