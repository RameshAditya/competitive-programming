n,a,b=[int(i) for i in input().split(" ")]
ans=0
'''
for t in range(1,n):
    #give t plates for a
    if t>=a and (n-t)>=b:
        ans=max(ans, 1)
    elif t>a and (n-t)<b:
        ans=max(ans, 1, (b%t))
    elif t<a and (n-t)>b:
        ans=max(ans, t, 1)
    elif t<a and (n-t)<b:
        ans=max(ans, t, (b%t))
'''


for i in range(2,n):
    if a%i==0 and b<(n-a//i):
        ans=max(ans, min(b%(n-(a//i)),i))
    elif a%i==0 and b>=(n-a//i):
        ans=max(ans, min(b//(n-a//i), i))
#    else:
ans=min(ans, a%n, b%n)
a,b=b,a
for i in range(2,n):
    if a%i==0 and b<(n-a//i):
        ans=max(ans, min(b%(n-(a//i)),i))
    elif a%i==0 and b>=(n-a//i):
        ans=max(ans, min(b//(n-a//i), i))

print(ans)
