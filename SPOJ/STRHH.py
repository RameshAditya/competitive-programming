T=int(input())
for t in range(T):
    s=input()
    r=s[:len(s)//2]
    for i in range(0,len(r),2):
        print(r[i],end='')

    print()
