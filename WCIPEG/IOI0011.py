def lcw(s1, s2):
    n = len(s1)
    m = len(s2)
    prev = [0 for i in range(m+1)]
    maxso = 0
    cur = [0 for i in range(m+1)]
    for i in range(n+1):
        for j in range(m+1):
            if i==0 or j==0:
                cur[j]=0
            elif s1[i-1]==s2[j-1]:
                cur[j] = 1+prev[j-1]
                maxso = max(maxso, cur[j])
            else:
                cur[j] = max(cur[j-1], prev[j])
        prev = cur[:]
        cur = [0 for i in range(m+1)]
    return maxso

n = int(input())
for i in range(n):
    s = input()
    print(len(s) - lcw(s, s[::-1]))
