'''input
3
1 -2 0
'''

n = int(input())
A = [int(i) for i in input().split(" ")]

A.sort()
#print(A)
mx = 0
ans = max([abs(sum(A[i:])-sum(A[:i])) for i in range(0,n)])

print(ans)