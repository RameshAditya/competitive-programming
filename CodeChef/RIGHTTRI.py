def dotproduct(x1,y1,x2,y2,x3,y3):
    if (x3-x2)*(x1-x2)+(y3-y2)*(y1-y2)==0 or (x3-x1)*(x2-x1)+(y3-y1)*(y2-y1)==0 or (x2-x3)*(x1-x3)+(y2-y3)*(y1-y3)==0:
        return 1
T=int(input())
ct=0
for t in range(T):
    x1,y1,x2,y2,x3,y3=map(int,input().split(" "))
    
    if dotproduct(x1,y1,x2,y2,x3,y3):
        ct+=1
print(ct)
