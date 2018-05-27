n, m, k = [int(i) for i in input().split(" ")]

if k==1 or k>n:
    print(pow(m,n,1000000007))
elif k==n:
    print(pow(m, (n+1)//2, 1000000007))
elif k%2:
    print(pow(m, 2, 1000000007))
else:
    print(pow(m, 1, 1000000007))
