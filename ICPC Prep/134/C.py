n,s=[int(i) for i in input().split(" ")]
c=[int(i) for i in input().split(" ")]

c.sort()
ok=1

for i in c:
    if i==0 or (s-i)%i!=0:
        ok=0
if s&1:
    ok=0

if not ok:
    print('No')
    exit
print('Yes')
l=0
r=n-1
a=[]
for i in c:
    a.append(i)
ans=0
#ans+=1
while l<n and r>=0 and l!=r:
    if c[l]<c[r]:
        ans+=c[l]
        c[r]-=c[l]
        c[l]=0
        l+=1
        #print(l+1, r+1)
    elif c[l]>c[r]:
        ans+=c[r]
        c[l]-=c[r]
        c[r]=0
        r-=1
        
        #print(l+1, r+1)
    elif c[l]==c[r]:
        ans+=c[l]
        c[l]=0
        c[r]=0
        l+=1
        r-=1
        
        #print(l+1, r+1)
print(ans)
l=0
#print(a)
r=n-1
while l<n and r>=0 and l!=r:
    if l<n and r>=0 and a[l]<a[r]:
        for i in range(a[l]):
            print(l+1, r+1)
        a[r]-=a[l]
        a[l]=0
        l+=1
        ans+=1
        #print(l+1, r+1)
    elif a[l]>a[r]:
        for i in range(a[r]):
            print(l+1, r+1)
        a[l]-=a[r]
        a[r]=0
        r-=1
        ans+=1
        
    elif l!=r and a[l]==a[r]:
        for i in range(a[l]):
            print(l+1, r+1)
        a[l]=0
        a[r]=0
        l+=1
        r-=1
