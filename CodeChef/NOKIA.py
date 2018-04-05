#dist = n+1

#2 4
def brute(ppl, rope, left, right):
    if rope>=limit and ppl!=0:
        return -1000000000
    if rope<limit and ppl==0:
        return 0
    ans = 0
    for i in range(left, right+1):
        ans = max(ans, right + 1 - left + brute(i - left, rope + right - left + 1, left, i-1) + brute(right - i + 1, rope + right - left + 1, i+1, right))

    return ans

n, k =  [int(i) for i in input().split(" ")]
limit = k
print(limit - brute(n,0,0,n))
