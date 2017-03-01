s=input()
flag=0
for j in range(1,len(s)):
    for i in range(len(s)):
        temp=''
        temp+=s[:i]+s[i+j:]
        if(int(temp)%8)==0:
            flag=1
            print("YES")
            print(temp)
            break
if flag==0:
    print("NO")
