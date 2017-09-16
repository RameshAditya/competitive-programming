T=int(input())
s=input()
for i in s:
    if i.isdigit():
        q=int(i)
s=input()
A=[]
for i in s:
    if i.isdigit():
        A.append(int(i))
for Q in range(q):
    s=input()
    a=-1
    b=-1
    c=-1
    d=-1
    for i in s:
        if i.isdigit():
            if a==-1:
                a=int(i)
            elif b==-1:
                b=int(i)
            elif c==-1:
                c=int(i)
            else:
                d=int(i)
    B=A[a-1:b]
    C=A[c-1:d]
    if(len(set(B)|set(C))<=(b-a+1)+1):
        print('YES')
    else:
        print('NO')
