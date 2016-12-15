for t in range(int(input())):
    n=int(input())
    A=list(map(int,input().split(" ")))
    if sum(A)>=100 and sum(A)<102:
        print("YES")
    else:
        print("NO")
