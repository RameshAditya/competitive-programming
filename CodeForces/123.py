n = int(input())
dp = [0]
dp.append(1)
for i in range(n):
    dp.append(dp[-1] + dp[-2])
print(sum(dp[:n+1]))
