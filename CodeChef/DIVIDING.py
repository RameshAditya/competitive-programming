n=int(input())
s=sum(list(map(int,input().split(" "))))
print("YES") if n*(n+1)//2==s else print("NO")
