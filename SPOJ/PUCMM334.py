n=int(input())
A=list(map(int,input().split(" ")))
if len(set(A))==2 and max(A)<n:
    print(max(A))
elif len(set(A))==1 and min(A)==0:
    print(0)
elif len(set(A))==1 and min(A)==max(A):
    print(n)
else:
    print(-1)
