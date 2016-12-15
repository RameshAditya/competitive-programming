s=input().split(" ")
while s[0]!='-1' or s[1]!='-1':
    a=int(s[0])
    b=int(s[1])
    if max(a,b)%(min(a,b)+1)==0:
        print(max(a,b)//(min(a,b)+1))
    else:
        print(max(a,b)//(min(a,b)+1) + 1)
    s=input().split(" ")
