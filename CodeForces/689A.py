fr=[1,2,3]
sr=[4,5,6]
tr=[7,8,9]
lr=[-1,0,-1]

fc=[1,4,7]
sc=[2,5,8,0]
tc=[3,6,9]

n=int(input())
s=input()
r1=0
r2=0
r3=0
r4=0
c1=0
c2=0
c3=0
for i in s:
    if i in fr:
        r1+=1
    if i in sr:
        r2+=1
    if i in tr:
        r3+=1
    if i in lr:
        r4+=1
    if i in fc:
        c1+=1
    if i in sc:
        c2+=1
    if i in tc:
        c3+=1
if r1>0 and r2>0 and r3>0  and c1>0 and c2>0 and c3>0:
    print('YES')
else:
    print('NO')
