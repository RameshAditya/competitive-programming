mod = 10**9 + 7
T = int(input())
for t in range(T):
    n, w = [int(i) for i in input().split(" ")]
    if abs(w)>=10:
        print(0)
        continue
    i=0
    if w>=0:
        for i in range(10):
            if i+abs(w)>=9:
                break
        F = ((i*pow(10, n-2, mod))%mod)
        ct = 0
        print(F)
    else:
        for i in range(9,-1,-1):
            if i+w<=0:
                break
        F = (pow(10, n-1, mod)%mod - ((i*pow(10, n-2, mod))%mod))%mod
        ct = 0
        print(F)


'''
5 digits
no. of ways of getting zero with n digits
If first digit = last digit, score = 0
last-first = w
'''
