T=int(input())
for t in range(T):
    s1=input()
    s2=input()
    if len(s1)>len(s2):
        c=0
        for i in s1:
            if i in s2:
                c+=1
        print(len(s1)-len(s2)+c-1)
    elif len(s1)==len(s2):
        c=0
        for i in s1:
            if i in s2:
                c+=1
        print(len(s2)-c)
    else:
        c=0
        for i in s1:
            if i in s2:
                c+=1
        print(len(s2)-c)
