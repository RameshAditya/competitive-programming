def ps(A):
    powerset=[]
    for i in range(1<<len(A)):
        X=[]
        for j in range(len(A)):
            if i&(1<<j):
                X.append(A[j])
        powerset.append(X)
    B=[]
    for i in powerset:
        if i not in B and len(i)!=0:
            B.append(i)
    return B
def gcd(A,B):
    if B==0:
        return A
    else:
        return gcd(B,A%B)
def isgcd(A):
    flag=0
    for i in range(len(A)-1):
        if gcd(A[i],A[i+1])==1:
            flag=1
            break
    return flag
T=int(input())
for t in range(T):
    n=int(input())
    A=list(map(int,input().split(" ")))
    combinations=ps(A)
    maxl=1
    #print('c',combinations)
    temp=[]
    for j in range(len(combinations)):
        #print('a')
        temp=[]
        for i in A:
            temp.append(i)
        #print('temp is',temp)
        for i in combinations[j]:
            if i in temp:
                #print('cj',i,j)
                temp.remove(i)
        #print('new temp is',temp)
        if len(temp)!=0:
            if not isgcd(temp):
                #print('b')
                if maxl<len(temp):
                    maxl=len(temp)
    print(maxl)
            
