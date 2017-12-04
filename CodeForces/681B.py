n=int(input())
ok=0
for a in range(1001):
    for b in range(1001):
        if (n - 1234567*a - 123456*b)>=0 and (n - 1234567*a - 123456*b)%1234==0:
            ok=1
            #print(a,b)
print("YES") if ok else print("NO")
