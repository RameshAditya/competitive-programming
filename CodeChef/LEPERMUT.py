T=int(input())
for t in range(T):
    N=int(input())
    A=[]
    s=input().split(" ")
    for i in range(N):
        A.append(int(s[i]))
    inv=0
    linv=0
    for i in range(N-1):
        for j in range(i+1,N):
            if A[i]>A[j]:
                inv+=1
                if j==i+1:
                    linv+=1
    print("YES") if inv==linv else print("NO")
                
