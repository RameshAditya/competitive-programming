n,k,l,c,d,p,nl,np=[int(i) for i in input().split(" ")]
print(min((k*l)//n, c*d, p//np)//nl)
