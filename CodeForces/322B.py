r,g,b=map(int,input().split(" "))
a=r//3+g//3+b//3
if r>=1 and g>=1 and b>=1:
    a=max(a,1+(r-1)//3 + (g-1)//3 + (b-1)//3)
if r>=2 and g>=2 and b>=2:
    a=max(a,2+(r-2)//3 + (g-2)//3 + (b-2)//3)
print(a)
