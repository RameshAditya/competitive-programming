K,N=map(int,input().split(" "))
k=[]
n=[]
for _ in range(K):
    k.append(input())
for _ in range(N):
    n.append(input())
for i in range(N):
    flag=0
    for j in range(K):
        if k[j] in n[i] or len(n[i])>=47 and flag==0:
            print("Good")
            flag=1
    if flag==0:
        print("Bad")
