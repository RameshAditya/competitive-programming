T=int(input())
for t in range(T):
    s=input().split(" ")
    if len(s)==1:
        print(s[0][0].upper()+s[0][1:].lower())
    elif len(s)==2:
        print(s[0][0].upper()+'. '+s[1][0].upper()+s[1][1:].lower())
    else:
        print(s[0][0].upper()+'. '+s[1][0].upper()+'. '+s[2][0].upper()+s[2][1:].lower())
