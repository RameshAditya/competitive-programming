import math
n = int(input())
A = [int(i) for i in input().split(" ")]
x = math.ceil(sum(A)/(n-1))
print(max(x,max(A)))
