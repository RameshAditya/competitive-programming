T=int(input())
for t in range(T):
    N,X=map(int,input().split(" "))
    A=[]
    s=input().split(" ")
    for i in range(N):
        A.append(int(s[i]))
    sum=0
    for i in A:
        sum+=i
    num=sum//X
    ct=0
    for i in A:
        if sum%X>i:
            ct+=1
            break
    print(num) if ct==0 else print(-1)
