n=int(input())
names=[]
old=[]
new=[]
for i in range(n):
    x,y,z=[i for i in input().split(" ")]
    names.append(x)
    old.append(int(y))
    new.append(int(z))
won=0
for i in range(n):
    if old[i]>=2400 and new[i]>old[i]:
        won=1
if won:
    print('YES')
else:
    print("NO")
