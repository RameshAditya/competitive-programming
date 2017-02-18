T=int(input())
for t in range(T):
    sumofroots,pdtofrootstwo,pdtofrootsall=map(int,input().split(" "))
    print(sumofroots*sumofroots - 2*pdtofrootstwo)
