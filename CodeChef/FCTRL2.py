T=int(input())
for i in range(T):
    x=int(input())
    p=1
    for j in range(1,x+1):
       p*=j
    print(p)
