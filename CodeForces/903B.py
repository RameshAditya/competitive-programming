h1,a1,c1=[int(i) for i in input().split(" ")]
h2,a2=[int(i) for i in input().split(" ")]

ans=[]
while h2>0:
    if h2<=a1:
        ans.append(1)
        h2-=a1
        break
    if h2>0 and h1>a2:
        ans.append(1)
        h2-=a1
        if h2>0:
            h1-=a2
        if h2<=0:
            break
    elif h2>0 and h1<=a2:
        ans.append(0)
        h1+=c1
        h1-=a2
print(len(ans))
for i in range(len(ans)):
    if ans[i]==1:
        print('STRIKE')
    else:
        print('HEAL')
