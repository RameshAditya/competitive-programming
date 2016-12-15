T=int(input())
for t in range(T):
    s=input().lower()
    if len(s)%2==0:
        l=len(s)//2
        ls=s[:l]
        rs=s[l:]
        ctl=[]
        ctr=[]
        for i in range(26):
            ctl.append(0)
            ctr.append(0)
        for i in range(l):
            #print(ord(ls[i]),ord(rs[i]))
            ctl[ord(ls[i])-97]+=1
            ctr[ord(rs[i])-97]+=1
        flag=0
        for i in range(l):
            if ctl[i]!=ctr[i]:
                flag=1
                break
        print("NO") if flag==1 else print("YES")
    elif len(s)%2==1:
        l=len(s)//2
        ls=s[:l]
        rs=s[l+1:]
        ctl=[]
        ctr=[]
        #print(ls,rs)
        for i in range(26):
            ctl.append(0)
            ctr.append(0)
        for i in range(l):
            #print(ord(ls[i]),ord(rs[i]))
            ctl[ord(ls[i])-97]+=1
            ctr[ord(rs[i])-97]+=1
        flag=0
        for i in range(l):
            if ctl[i]!=ctr[i]:
                flag=1
                break
        print("NO") if flag==1 else print("YES")
