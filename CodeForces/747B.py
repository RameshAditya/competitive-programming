n=int(input())
s=input()
na=0
ng=0
nc=0
nt=0
ans=''
flag=0
for i in s:
    if i=='?':
        continue
    else:
        if i=='A':
            na+=1
        elif i=='G':
            ng+=1
        elif i=='T':
            nt+=1
        elif i=='C':
            nc+=1
if na>n//4 or ng>n//4 or nc>n//4 or nt>n//4 or n%4!=0:
    flag=1
if flag==0:
    for i in range(len(s)):
        if s[i]!='?':
            ans+=s[i]
        else:
            if na<n//4:
               na+=1
               ans+='A'
            elif ng<n//4:
                ng+=1
                ans+='G'
            elif nc<n//4:
                nc+=1
                ans+='C'
            elif nt<n//4:
                nt+=1
                ans+='T'
print(ans) if flag==0 else print("===")
