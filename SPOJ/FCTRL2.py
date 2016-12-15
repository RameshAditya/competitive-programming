def fact(x):
    if x==1:
        return 1
    else:
        return x*fact(x-1)
T=int(input())
for i in range(T):
    x=int(input())
    print(fact(x))
