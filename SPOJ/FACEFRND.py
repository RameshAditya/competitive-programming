T=int(input())
tot=[]
setx=set()
for t in range(T):
    s=input().split(" ")
    a=[]
    for i in s:
        if i!='':
            a.append(int(i))
    tot.append(a[0])
    for i in range(2,len(a)):
        setx|={a[i]}
print(abs(T-len(setx)))
