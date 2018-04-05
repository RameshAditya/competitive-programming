import math

r, x, y, a, b = [int(i) for i in input().split(" ")]

d = (a-x)**2 + (b-y)**2

d = d**0.5

print(int(math.ceil(d/(2*r))))
