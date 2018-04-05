import random
print(10)
for t in range(10):
    n=random.randint(1,500)
    print(n)
    for i in range(n):
        print(random.randint(1,1000),end=' ')
    print()
