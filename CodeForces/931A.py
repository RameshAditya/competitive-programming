a=int(input())
b=int(input())
mn = min(a,b)
mx = max(a,b)
res = (mn*(mn+1))//2 + (mx*(mx+1))//2
for i in range(mn, mx+1):
    res = min(res, ((mx-i)*(mx-i+1))//2 + ((i-mn)*(i-mn+1))//2)
print(res)
