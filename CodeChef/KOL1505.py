T = int(input())
for t0 in range(T):
    s = input()
    t = input()

    x = '$'
    y = '$'

    for i in range(len(s)):
        if s[i]!=x[-1]:
            x+=s[i]
    for i in range(len(t)):
        if t[i]!=y[-1]:
            y+=t[i]
    print('Yes') if x==y else print('No')
