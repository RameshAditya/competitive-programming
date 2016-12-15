T=int(input())
for t in range(T):
    n=int(input())
    s=input().split(" ")
    a=[]
    for i in s:
        a.append(int(i))
    print(len(set(a))*(len(set(a))-1)//2)
