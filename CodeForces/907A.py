a,b,c,d=[int(i) for i in input().split(" ")]
ca=a
cb=b
cc=max(c,d)

if 2*d>=cb or 2*c<cc:
    print(-1)
else:
    print(ca,cb,cc,sep='\n')
