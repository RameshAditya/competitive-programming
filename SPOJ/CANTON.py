def summate(n):
    return (n*(n+1)/2)
t=int(input())
for m in range(t):
    n=int(input())
    x=1
    while summate(x)<n:
        x+=1
    index=x
    sumofij=x
    if index%2==0:
        i=index-summate(index)+n
        j=x-i+1
    elif index%2==1:
        i=summate(index)-n+1
        j=x-i+1
    print("TERM " + str(n) +" IS "+str(int(i))+"/"+str(int(j)))
