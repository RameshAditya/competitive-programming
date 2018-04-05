n, a, b = [int(i) for i in input().split(" ")]
mn = min(a,b)
mx = max(a,b)
diff = max(a,b) - min(a,b)
if not a&1:
    a-=1
if not b&1:
    b-=1
state = [0]*(n+1)
level = 1
final = 0
while (1<<final)<n:
    final+=1

while level!=final:
    for i in range(mn,n,2):
        if state[i]==1:
            continue
        else:
            state[i+1]=1
    level+=1
    if state[a] or state[b]:
        break
print(level)
