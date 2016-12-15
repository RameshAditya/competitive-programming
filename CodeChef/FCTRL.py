def trail(x):
    i=0
    ct2=0
    ct5=0
    while x//(2**(i+1))!=0 or x//(5**(i+1))!=0:
        ct2+=x//(2**(i+1))
        ct5+=x//(5**(i+1))
        i+=1
    return min(ct2,ct5)

T=int(input())
for t in range(T):
    x=int(input())
    print(trail(x))
