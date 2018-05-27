s = input()
s = '$' + s
dp = [0 for i in range(len(s)+1)]

for i in range(2,len(s)):
    if int(s[i]) + int(s[i-1]) == 9:
        dp[i] = 1 + dp[i-2]
    else:
        dp[i] = 0
seg = []
print(dp)
i = 0
top = max(dp)
while i<(len(dp)):
    j = 0
    while i+j<len(dp) and dp[i] == dp[i+j] and dp[i]==top:
        j+=1
    if j!=0:
        seg.append(j)
    i+=j
    if i<len(dp) and dp[i]==0:
        i+=1
#print(seg)
res = 1
for i in seg:
    res *= i
#print(dp.count(max(dp)))
print(res)
