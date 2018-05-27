a, b, c, x, y = [int(i) for i in input().split(" ")]

#cost for a = min(a, 2*c)
#cost for b = min(b, 2*c)

print(min((x*a + y*b), 2*c*x + b*(max(y-x,0)), (2*c*y + a*(max(x - y,0)))))
