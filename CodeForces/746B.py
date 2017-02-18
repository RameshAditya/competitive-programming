while True:
    n=int(input())
    enc=input()
    ans=''
    dec=['a' for i in range(n)]
    def mid(n):
        if n&1:
            return n//2
        else:
            return n//2
    for i in range(n):
        dec[mid(n)+(-1)**(i)*(i+1)//2]=enc[i]
    for i in dec:
        ans+=i
    print(ans)
