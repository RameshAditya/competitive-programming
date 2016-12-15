s=input().split(" ")
a=int(s[0])
b=int(s[1])
d=a-b
if d%10!=9:
    d+=1
else:
    d-=1
print(d)
