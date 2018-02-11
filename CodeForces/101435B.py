a,b,c,d=[int(i) for i in input().split(" ")]
tot=a+b+c+d
if (a+b == c+d and a+b == tot//2) or (a+c == b+d and a+c == tot//2) or (a+d == b+c and a+d == tot//2):
    print('Yes')
else:
    print('No')
