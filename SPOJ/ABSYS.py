t=input()
for T in range(int(t)):
    blank=input()
    s=input().split(" ")
    w=''
    for j in range(0,5):
        if "machula" in s[j]:
            if j%5==0:
                s[j]=str(int(s[j+4])-int(s[j+2]))
            if j%5==2:
                s[j]=str(int(s[j+2])-int(s[j-2]))
            if j%5==4:
                s[j]=str(int(s[j-2])+int(s[j-4]))
    for i in s:
        w+=i
        w+=' '
    w=w[:-1]
    print(w)
    
