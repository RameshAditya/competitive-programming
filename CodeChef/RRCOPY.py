T=int(input())
for t in range(T):
    n=int(input())
    s=input().split(" ")
    A=set()
    for i in s:
        A|={int(i)}
    print(len(A))
