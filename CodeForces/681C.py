n=int(input())
A=[]
for i in range(n):
    ins=input().split(" ")
    s=''
    a=0
    if len(ins)==2:
        s=ins[0]
        a=int(ins[1])
    else:
        s=ins[0]
    A.append(ins)
heap=[]
for i in range(n):
    if A[i][0][0]=='i':
        heap.append(A[i][0][1])
        print(' '.join(A[i][0]))
    if A[i][0][0]=='r':
        heap.remove(min(heap
    
