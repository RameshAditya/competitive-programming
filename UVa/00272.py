s=input()
while s:
    a=''
    ct=0
    for i in s:
        if i=='"' and ct%2==0:
            a+='``'
            ct+=1
        elif i=='"' and ct%2==1:
            a+='\'\''
            ct+=1
        else:
            a+=i
    print(a)
    s=input()
