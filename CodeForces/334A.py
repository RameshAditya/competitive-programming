n = int(input())
x=1
for i in range(n):
    for j in range(n//2):
        print(x, n*n-x+1,end=' ')
        x+=1
    print()
