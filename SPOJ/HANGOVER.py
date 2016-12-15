def overhang(n):
    sum=0
    for i in range(1,n+1):
        sum+=float(1/(i+1))
    return sum
c=float(input())
while c!=0.00:
    for i in range(1,500):
        if overhang(i)>=c:
            print(str(i)+" card(s)")
            break
    c=float(input())
