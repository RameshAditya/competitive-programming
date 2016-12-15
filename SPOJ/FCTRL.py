def num(n,x):
    i=1
    sum=0
    while(n//(x**i)>0):
        sum+=n//(x**i)
        i+=1
    return sum
T=int(input())
for i in range(T):
    m=int(input())
    print(min(num(m,5),num(m,2)))
