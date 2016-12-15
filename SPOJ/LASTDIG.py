def c(x,b):
    if x==0:
        return 0
    elif x==1:
        return 1
    elif x==2:
        if b%4==0:
            return 6
        elif b%4==1:
            return 2
        elif b%4==2:
            return 4
        else:
            return 8
    elif x==3:
        if b%4==0:
            return 1
        elif b%4==1:
            return 3
        elif b%4==2:
            return 9
        else:
            return 7
    elif x==4:
        if b%2==0:
            return 6
        else:
            return 4
    elif x==5:
        return 5
    elif x==6:
        return 6
    elif x==7:
        if b%4==0:
            return 1
        elif b%4==1:
            return 7
        elif b%4==2:
            return 9
        else:
            return 3
    elif x==8:
        if b%4==1:
            return 8
        elif b%4==2:
            return 4
        elif b%4==3:
            return 2
        else:
            return 6
    else:
        if b%2==1:
            return 9
        else:
            return 1
t=int(input())
for i in range(t):
    s=input().split(' ')
    a=int(s[0])
    b=int(s[1])
    print(1) if b==0 else print(c((a%10),b))
