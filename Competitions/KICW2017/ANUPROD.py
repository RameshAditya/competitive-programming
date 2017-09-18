n=int(input())
A=[int(i) for i in input().split(" ")]
p=1
for i in A:
    p*=i
print(p%(10**9+7))
