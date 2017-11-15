n=int(input())
A=[int(i) for i in input().split(" ")]
prev=[len(A) for i in range(max(A)+1)]
for i in range(n):
    prev[A[i]]=i
print(prev.index(min(prev)))
