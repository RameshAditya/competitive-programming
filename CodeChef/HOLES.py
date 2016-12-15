def num(x):
    if x=='A' or x=='D' or x=='Q' or x=='R' or x=='O' or x=='P':
        return 1
    elif x=='B':
        return 2
    else:
        return 0
for t in range(int(input())):
    ct=0
    s=input()
    for i in s:
        ct+=num(i)
    print(ct)
        
