s=input().split(" ")
x=int(s[0])
y=float(s[1])
if x%5==0 and x<=y:
    print(format(y-x-0.5,'.2f'))
else:
    print(format(y,'.2f'))
