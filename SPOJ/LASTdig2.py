def c(x,b):
    y=b%4
    if (x==0):
        return 0
    elif (x==1) or (x==3 and y==0) or (x==7 and y==0) or (x==9 and b%2==0):
        return 1
    elif (x==2 and y==1) or (x==8 and y==3):
        return 2
    elif (x==3 and y==1) or (x==7 and y==3):
        return 3
    elif (x==2 and y==2) or (x==4 and y==1) or (x==8 and y==2):
        return 4
    elif (x==5):
        return 5
    elif (x==2 and y==0) or (x==4 and b%2==0) or (x==6) or (x==8 and y==0):
        return 6
    elif (x==3 and y==3) or (x==7 and y==1):
        return 7
    elif (x==2 and y==3) or (x==8 and y==1):
        return 8
    else:
        return 9
t=int(input())
for i in range(t):
    s=input().split(' ')
    a=int(s[0])
    b=int(s[1])
    print(1) if b==0 else print(c((a%10),b))
