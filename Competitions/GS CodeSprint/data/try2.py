import csv
from sklearn import datasets

def worth(val, worst, best=0):
    return abs(worst-val)

dataset = open('train.csv','rt')
a=[]
b=[]
c=[]
d=[]
e=[]
f=[]
g=[]


for i in dataset:
    if 'buying' in i:
        continue
    cc=i.split(",")
    a.append(int(cc[0]))
    b.append(int(cc[1]))
    c.append(int(cc[2]))
    d.append(int(cc[3]))
    e.append(int(cc[4]))
    f.append(int(cc[5]))
    g.append(int(cc[6]))

suma=0
sumb=0
sumc=0
sumd=0
sume=0
sumf=0
ct=0
for i in range(len(g)):
    if g[i]>=1:
        x=g[i]
        suma+=x*a[i]
        sumb+=x*b[i]
        sumc+=x*c[i]
        sumd+=x*d[i]
        sume+=x*e[i]
        sumf+=x*f[i]
        ct+=1

besta = min(4,int(round(suma/ct)))
bestb = min(4,int(round(sumb/ct)))
bestc = min(4,int(round(sumc/ct)))
bestd = min(4,int(round(sumd/ct)))
beste = min(4,int(round(sume/ct)))
bestf = min(4,int(round(sumf/ct)))


dataset = open('test.csv', "rt")
a=[]
b=[]
c=[]
d=[]
e=[]
f=[]

sz=0

for i in dataset:
    sz+=1
    cc=i.split(",")
    a.append(int(cc[0]))
    b.append(int(cc[1]))
    c.append(int(cc[2]))
    d.append(int(cc[3]))
    e.append(int(cc[4]))
    f.append(int(cc[5]))
nums=[i for i in range(sz)]
scores=[0]*100
for i in range(sz):
    scores[i] = worth(a[i], 4) + worth(b[i], 4) + worth(c[i], 2) + worth(d[i], 2) + worth(e[i], 1) + worth(f[i], 1)

inds = [x for _, x in sorted(zip(scores, nums))]
ans=[4-i//25 for i in range(sz)]

with open('ans2.csv', 'w', newline='') as csvfile:
    spamwriter = csv.writer(csvfile) #, delimiter='',quotechar='|', quoting=csv.QUOTE_MINIMAL)
    cur=0
    i=0
    while i<(len(inds)):
        if inds[i]==cur:
            spamwriter.writerow(str(5-ans[i]))
            cur+=1
            i=0
        else:
            i+=1
