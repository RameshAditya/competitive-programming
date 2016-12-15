def issubseq(A,B):
    if len(B)<len(A):
        return 0
    i=0
    j=0
    ct=0
    while i<len(B) and j<len(A):
        if A[j]==B[i]:
            ct+=1
            j+=1
            i+=1
        else:
            i+=1
    if ct==len(A):
        return 1
    else:
        return 0
T=int(input())
for t in range(T):
    s=input().split(" ")
    A=''
    B=''
    for i in s[0]:
        A+=i
    for i in s[1]:
        B+=i
    print("YES") if (issubseq(A,B) or issubseq(B,A)) else print("NO")
                
