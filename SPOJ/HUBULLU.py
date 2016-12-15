T=int(input())
for t in range(T):
    A=input().split(" ")
    N=[]
    for i in A:
        if i.isdigit():
            N.append(int(i))
    k=N[1]
    print("Airborne wins.") if k==0 else print("Pagfloyd wins.")
