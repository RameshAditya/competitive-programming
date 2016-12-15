t=int(input())
for j in range(t):
    ct=0
    k=int(input())
    i=''
    if k%4!=0:
        i+=str(k//4)
    else:
        i+=str(k//4-1)
    if k%4==1:
        i+='192'
    elif k%4==2:
        i+='442'
    elif k%4==3:
        i+='692'
    elif k%4==0:
        i+='942'
    print(int(i))
    
