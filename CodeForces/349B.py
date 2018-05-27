n = int(input())
A = [int(i) for i in input().split(" ")]
B = [(A[i],len(A)-(i+1)) for i in range(len(A))]

B.sort()
if n==0 or n<B[0][0]:
    print(-1)
else:
    x = 0
    ans = ''
    cur = 0
    while cur<len(B) and x<n:
        if cur<len(B) and x+B[cur][0]<=n:
            x+=B[cur][0]
            ans += str(len(A) - (B[cur][1]))
        else:
            cur+=1

    print(ans)
