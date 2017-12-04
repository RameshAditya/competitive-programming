def hcf(a,b):
    if b==0:
        return a
    return hcf(b,a%b)

n=int(input())
for i in range(n//2+1,0,-1):
    if hcf(i,n-i)==1:
        print(min(i,n-i),max(i,n-i))
        break
        
