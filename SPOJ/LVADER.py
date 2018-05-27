'''
f(x, y) = f(x-1, y) + f(x-1,y-1) + f(x, y-1)

f(sx, sy) = 0
f(ex, ey) = ?
'''
ex = 3
ey = 5

def f(x,y):
    if x==ex or y==ey:
        return 1
    elif x>ex or y>ey:
        return 0
    return f(x+1, y) + f(x, y+1) + f(x+1, y+1)
