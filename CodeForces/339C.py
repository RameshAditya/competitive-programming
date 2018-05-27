s = input()
x = int(input())
a = []
for i in range(len(s)):
    if s[i]=='1':
        a.append(i+1)
ok = 0 #ue
for i in range(len(a)-1):
    if i+1<len(a) and a[i]*2 > a[i+1]:
        ok = 1
        break
if ok or len(a)==1:
    print('YES')
    while x>0:
        print(a[i], end=' ')
        x-=1
        if x>0:
            print(a[i+1], end=' ')
        x-=1
else:
    print('NO')
