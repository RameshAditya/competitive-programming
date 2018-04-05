import random
T=100
print(T)

for t in range(T):
    n=1+random.randint(1,100)
    k=1+random.randint(1,50)
    k=min(500,k,n-1)
    print(n,k)
