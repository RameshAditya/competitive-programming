T=int(input())
for t in range(T):
    a,b,m=[int(i) for i in input().split(" ")]
    print(max(a + b - m*(m+1), a - b, b - a))
