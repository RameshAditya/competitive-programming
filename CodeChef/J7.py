T=int(input())
for t in range(T):
    P,S=map(int,input().split(" "))
    print(format(((P+(P**2-24*S)**0.5)/12),'.2f'))
