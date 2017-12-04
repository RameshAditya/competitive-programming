k,x=[int(i) for i in input().split(" ")]
i=1
while k%10!=0 and k>0:
    k-=x
    i+=1
print(i-1)
