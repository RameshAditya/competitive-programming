air - cant have anything above it, or water on left or right
water - cant have anything above it, cant be in side or cant have air next to it

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
