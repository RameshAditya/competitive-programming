n=int(input())
A=[int(i) for i in input().split(" ")]
s,f=[int(i) for i in input().split(" ")]

d=f-s

pref=[]
cur=0
for i in range(d):
    cur+=A[i]
pref.append(cur)
for i in range(d,n):
    pref.append(pref[-1] + A[i] - A[i-d])

mx=0
mi=0
pos=[]
for i in range(len(pref)):
    if pref[i]>mx:
        mi=i
        mx=pref[i]
        

for i in range(len(pref)):
    if pref[i]==mx:
        pos.append(i)
ans=n
for k in range(len(pos)):
    mi = pos[k]
    c=s
    for i in range(mi,0,-1):
        if c==0:
            c=n
        else:
            c-=1
    if c==0:
        c=n
    ans = min(ans, c)
   # print('a',ans)
if pos[0]==0:
    print(ans)
else:
    print(ans)
