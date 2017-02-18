s=input()
r=0
g=0
b=0
y=0
jump=0
for i in range(len(s)):
    if s[i]=='!':
        jump=0
        while(s[i+jump]!='!'):
            jump+=4
            if i+jump>len(s):
                break
        if(s[i]=='R'):
            r+=1
        elif s[i+jump]=='G':
            g+=1
        elif s[i+jump]=='B':
            b+=1
        elif s[i+jump]=='Y':
            y+=1
print(r,b,y,g)
