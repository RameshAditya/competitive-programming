n,a,b=[int(i) for i in input().split(" ")]
#ans=min(n%a,n%b)
exca=0
ans=0
if a<b:
    a,b=b,a
i=0
if (n-i)>=a and (n-i)>=b:
    ans=max(ans,min((n-i)%a,(n-i)%b))
    #print('1',ans)
elif (n-i)<a and (n-i)>b:
    ans=max(ans,min((n-i)%b, a%(n-i)))
    #print('2',ans)
elif (n-i)<a and (n-i)<b:
    ans=max(ans, a%(n))
#    print('3',ans)
print(ans)
