t=int(input())
for i in range(t):
    r=float(input())
    if r==0:
        print(0)
    else:
        print("Case",str(i+1)+":",(4*r*r + 0.25) )
