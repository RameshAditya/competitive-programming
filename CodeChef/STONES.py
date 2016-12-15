t = int(input())
for _ in range(t):
    j = input()
    s = input()
    count = 0 
    for i in s:
        if i in j:
            count += 1
    print(count)
            
