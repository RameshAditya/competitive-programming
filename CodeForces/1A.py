n,m,a=map(int,input().split(" "))
h=0
w=0
if n%a==0:
    h=n//a
else:
    h=n//a+1
if m%a==0:
    w=m//a
else:
    w=m//a+1
print(h*w)
