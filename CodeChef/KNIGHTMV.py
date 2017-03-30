T=int(input())
for t in range(T):
    s=input()
    lett=[]
    nos=[]
    flag=0
    if len(s)!=5:
        flag=1
    if not s[0].isalpha() or not s[3].isalpha() or not s[1].isdigit() or not s[4].isdigit() or s[3]!='-':
        flag=-1
    if abs(ord(s[0])-ord(s[3]))==2 and abs(ord(s[1])-ord(s[4]))==1:
        flag=0
    elif abs(ord(s[0])-ord(s[3]))==1 and abs(ord(s[1])-ord(s[4]))==2:
        flag=0
    else:
        flag=1
    if flag:
        print("Yes")
    elif flag==0:
        print("No")
    else:
        print("Error")
