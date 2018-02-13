x, y = [int(i) for i in input().split(" ")]
if y==1 and x!=0:
    print('No')
elif y>0 and (x-y+1)>=0 and (x-y+1)%2==0:
    print('Yes')
else:
    print('No')
