y=10
def c(x,b):
    if x%y==0:
        print(0)
    elif x%y==1:
        print(1)
    elif x%y==2:
        if b%4==0:
            print(6)
        else:
            return 2**(b%4)
    elif x%y==3:
        if b%4==0:
            print(1)
        elif b%4==1:
            print(3)
        elif b%4==2:
            print(9)
        else:
            print(7)
    elif x%y==4:
        if b%2==0:
            print(6)
        else:
            print(1)
    elif x%y==5:
        print(5)
    elif x%y==6:
        print(6)
    elif x%y==7:
        if b%4==0:
            print(1)
        elif b%4==1:
            print(7)
        elif b%4==2:
            print(9)
        else:
            print(3)
    elif x%y==8:
        if b%4==1:
            print(8)
        elif b%4==2:
            print(4)
        elif b%4==3:
            print(2)
        else:
            print(6)
    else:
        if b%2==1:
            print(9)
        else:
            print(1)
t=int(input())
for i in range(t):
    s=input().split(' ')
    a=int(s[0])
    b=int(s[1])
    print(1) if b==0 else c((a%10),b)
