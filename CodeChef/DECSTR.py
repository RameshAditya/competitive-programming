s='abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvw'
T=int(input())
for t in range(T):
    x=int(input())
    r=x%26
    x=x//26
    if x==0:
        print(s[:r+1][::-1])
    else:
        a=''
        a+=s[:r+26*x+x+1]
        print(a[::-1])
