def cal(x):
    ans = 0
    while (x):
        ans += x % 10
        x /= 10
    return ans

n = input()
now = 0
while (n):
    now += 1
    if cal(now) == 10:
        n -= 1
print now
