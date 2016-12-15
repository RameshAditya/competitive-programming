T=int(input())
for t in range(T):
    n=int(input())
    s=input()
    blownup=[]
    for i in range(len(s)):
        blownup.append(0)
    if len(s)==1 or n==1:
        if s[0]=='1':
            print(0)
        else:
            print(1)
    else:
        for i in range(len(s)):
            if i==0:
                if s[i]=='1':
                    blownup[i]=1
                    blownup[i+1]=1
            if i!=0 and i<len(s)-1:
                if s[i]=='1':
                    blownup[i]=1
                    blownup[i-1]=1
                    blownup[i+1]=1
            if i==len(s)-1:
                if s[i]=='1':
                    blownup[i]=1
                    blownup[i-1]=1
        print(blownup.count(0))
