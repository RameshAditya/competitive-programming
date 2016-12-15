T=int(input())
for t in range(T):
    blank=input()
    s=input().split(" ")
    ans=0
    #print(s)
    for i in range(len(s)):
        if ans==0:
            if s[i]=="*":
                ans+=int(s[i-1])*int(s[i+1])
            elif s[i]=="+":
                ans+=int(s[i-1])+int(s[i+1])
            elif s[i]=="-":
                ans+=int(s[i-1])-int(s[i+1])        
            elif s[i]=="/":
                ans+=int(s[i-1])//int(s[i+1])
        else:
            if s[i]=="*":
                ans=ans*int(s[i+1])
            elif s[i]=="+":
                ans=ans+int(s[i+1])
            elif s[i]=="-":
                ans=ans-int(s[i+1])        
            elif s[i]=="/":
                ans=ans//int(s[i+1])
    print(ans)
        
