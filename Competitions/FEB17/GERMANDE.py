T=int(input())
for t in range(T):
    s=input()
    o1=-1
    o2=-1
    for i in s:
        if i.isdigit():
            if o1==-1:
                o1=int(i)
            elif o2==-1:
                o2=int(i)
    
    #o1,o2=map(int,input().split(" "))
    x=input()
    A=[]
    for i in x:
        if i.isdigit():
            A.append(int(i))

    #A=list(map(int,input().split(" ")))
    net=0
    for i in range(o2): 
        if net==1:
            break
        win=0
        for j in range(i,o1*o2,o2):
            ans=0
            for k in range(j,j+o2):
                if A[k%(o1*o2)]==1:
                    ans+=1
                else:
                    ans-=1
            if ans>0:
                win+=1
            else:
                win-=1
        if win>0:
            net=1
        else:
            net=0
    print(net)
