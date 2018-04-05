T=int(input())
for t in range(T):
    s=input()
    a=''
    for i in s:
        if i.isalpha():
            a+=i.lower()
    x=0
    for i in range(len(a)):
        if sorted(list(a[i:i+4])) == sorted(list('chef')):
            x+=1
    print('lovely',x) if x else print('normal')
