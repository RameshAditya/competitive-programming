T=int(input())
for t in range(T):
    a,b=map(int,input().split(" "))
    if a<b:
        print("≺")
    elif a>b:
        print("≻")
    else:
        print("=")
