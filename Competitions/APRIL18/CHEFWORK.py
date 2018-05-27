n = int(input())
c = [int(i) for i in input().split(" ")]
t = [int(i) for i in input().split(" ")]
m1 = 123123
m2 = 123123
m3 = 123123
for i in range(n):
    if t[i]==1:
        m1 = min(m1, c[i])
    elif t[i]==2:
        m2 = min(m2, c[i])
    else:
        m3 = min(m3, c[i])
print(min(m1+m2, m3))


'''

wt = 11
1929

'''
