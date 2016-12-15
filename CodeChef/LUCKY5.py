for t in range(int(input())):
    n=list(input())
    ct=0
    for i in n:
        if i=='4' or i=='7':
            continue
        else:
            ct+=1
    print(ct)
