a,b=[int(i) for i in input().split(" ")]
x=0
while x*x<=a:
    x+=1
movesa=x-1
x=0
while x*x+x<=b:
    x+=1
movesb=x-1
if(movesb<movesa):
    print('Valera')
else:
    print('Vladik')
