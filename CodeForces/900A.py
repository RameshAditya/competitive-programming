n=int(input())
pos=0
neg=0
for i in range(n):
    x,y=[int(i) for i in input().split(" ")]
    if x<0:
        neg+=1
    else:
        pos+=1
if neg<=1 or pos<=1:
    print('Yes')
else:
    print('No')
