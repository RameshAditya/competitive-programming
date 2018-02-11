n=int(input())
if n<=2:
    print(n+1)
else:
    for i in range(2, n):
        if n%i!=0:
            print(i)
            break
