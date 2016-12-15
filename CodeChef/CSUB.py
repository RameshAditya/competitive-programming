T=int(input())
for t in range(T):
    n=int(input())
    num=input()
    x=num.count('1')
    print(x*(x+1)//2)
