T=int(input())
for t in range(T):
    n = int(input())
    A = [int(i) for i in input().split(" ")]
    print(len(A) - len(set(A)))
