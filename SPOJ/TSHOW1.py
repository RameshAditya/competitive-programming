n=int(input())
for i in range(n):
    k=int(input())
    k+=1
    s=''
    while k>1:
        if not k&1:
            s+='5'
        else:
            s+='6'
        k>>=1
    print(s[::-1])
