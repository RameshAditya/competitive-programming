def calc(s,n):
    i=0
    maxi=[]
    while i<n:
        j=1
        while(i+j<n and s[i]==s[i+j]):
            j+=1
        maxi.append(j)
        i+=j-1
        i+=1
    return max(maxi)
 
ans=1000000
 
def brute(init, key, k):
    if k>=0:
        global ans
        temp=[]
        for i in init:
            temp.append(int(i))
        for i in range(len(key)):
            if key[i]==1:
                temp[i]^=1
        ans=min(calc(temp,n),ans)
        for i in range(len(key)):
            key[i]=1
            brute(temp,key,k-1)
            key[i]=0
answers=[[100 for i in range(11)] for j in range(1024)]
#t=1024
for t in range(1024):
    n=len(bin(t))-2
    for k in range(min(t,11)):        
        ans=n
        '''n1=input()
        n=-1
        k=-1
        for i in n1:
            if i.isdigit() and n==-1:
                n=int(i)
            elif i.isdigit():
                k=int(i)'''
        #n,k=map(int,input().split(" "))
        key=[0]*n
        #init=input()
        init=bin(t)[2:]
        #temp=[]
        k=min(n//2+1,k)
        #for i in init:
        #    temp.append(int(i))
        brute(init,key,k)
        print('ans',ans,'n',bin(t)[2:],'k',k,'t',t)
        answers[t][k]=min(answers[t][k],ans)
print(answers)
