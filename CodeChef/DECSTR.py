T=int(input())
for t in range(T):
    k=int(input())
    s='abcdefghijklmnopqrstuvwxyz'
    k+=1
    if k>=26:
        print(s[::-1]*(k//26),end='')
        print(s[::-1][:k%26])
    else:
        print(s[:k][::-1])
