gl=[]
def rec(A):
    global gl
    print(gl)
    if A not in gl:
        gl.append(A)
    for i in range(len(A)-2):
        if i+2<len(A) and A[i]>0 and A[i+1]>0:
            A[i]-=1
            A[i+1]-=1
            A[i+2]+=1
            if A not in gl:
                gl.append(A)
            rec(A)
            A[i+2]-=1
            A[i+1]+=1
            A[i]+=1
    if A[len(A)-2]>0 and A[len(A)-1]>0:
        A[len(A)-2]-=1
        A[len(A)-1]-=1
        A.append(1)
        if A not in gl:
            gl.append(A)
        rec(A)
        A=A[:-1]
        A[len(A)-1]+=1
        A[len(A)-2]+=1
T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    rec(A)
    print(len(gl))
