T=int(input())
A=set('abcdefghijklmnopqrstuvwxyz')
for t in range(T):
    s=input()
    A=A&set(s)
A=list(A)
A.sort()
print(''.join(A)) if len(A)!=0 else print("no such string")
