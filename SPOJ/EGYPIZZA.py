T=int(input())
no34=0
no14=0
no12=0
ans=1
for t in range(T):
    s=input()
    if s[0]=='1' and s[2]=='4':
        no14+=1
    elif s[0]=='1' and s[2]=='2':
        no12+=1
    else:
        no34+=1
    #possible combinations - 34 alone, 34 with 14, 14 14 12, 12 12, 14 14 14 14
ans+=min(no34,no14)
if no34>no14:
    no34-=no14
else:
    no14-=no34
    no34=0
ans+=no14//4
no14=no14%4
ans+=no12//2
no12=no12%2
ans+=min(no12,no14)
if no12>no14:
    no12-=no14
    no14=0
else:
    no14-=no12
    no12=0

ans+=no34
print(ans)
