T=int(input())
for t in range(T):
    n=int(input())
    print("y ",end='') if 360%n==0 else print("n ",end='')
    print("y ",end='') if n<=360 else print("n ",end='')
    print("y") if n*(n+1)/2<=360 else print("n")

    
    
