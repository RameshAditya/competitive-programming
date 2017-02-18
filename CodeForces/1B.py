def findcol(X):
    ct=0
    for i in range(len(X)-1):
        ct=26*ct+(ord(X[i])-64)*26
    ct+=(ord(X[len(X)-1])-64)
    return ct
def findalphabets(X):
    s=''
    Y=int(X)
    while(Y>26):
        s+=chr(Y//26 + 64)
        Y=Y//26
    if Y%26==0:
        s+='Z'
    elif Y%26==1:
        s+='A'
    else:
        s+=chr(Y%26+65)
    return s
        
T=int(input())
for t in range(T):
    s=input()
    alphabetleft=[]
    numleft=[]
    alphabetright=[]
    numright=[]
    flag=0
    flagn=0
    ans=''
    for i in s:
        if i.isalpha() and flag==0:
            alphabetleft.append(i)
        if i.isdigit() and flagn==0:
            if flag==0:
                flag=1
            numleft.append(i)
        if i.isalpha() and flag==1:
            flagn=1
            alphabetright.append(i)
        if i.isdigit() and flagn==1:
            numright.append(i)
    if len(alphabetright)==0 and len(numright)==0:
        ans+='R'
        ans+=''.join(numleft)
        ans+='C'
        ans+=str(findcol(alphabetleft))
        print(ans)
    else:
        ans+=findalphabets(''.join(numright))
        #insert code to convert R23C55 to BC23
        ans+=''.join(numleft)
        print(ans)
