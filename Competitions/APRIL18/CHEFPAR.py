n, m, k =[int(i) for i in input().split(" ")]
A = [int(i) for i in input().split(" ")]
B = [int(i) for i in input().split(" ")]
print(*[i+k for i in A])
