T=int(input())
for t in range(T):
    final=[0]*26
    occur=[0]*26
    digits=[0]*10
    s=input()
    for i in s:
        digits[int(i)]+=1
    if digits[6]:
        for i in range(5,10):
            if (digits[i] and i!=6) or (i==6 and digits[6]>1):
                final[60+i-ord('A')]+=1
    if digits[7]:
        for i in range(10):
            if (digits[i] and i!=7) or (i==7 and digits[7]>1):
                final[70+i-ord('A')]+=1
    if digits[8]:
        for i in range(10):
            if (digits[i] and i!=8) or (i==8 and digits[8]>1):
                final[80+i-ord('A')]+=1
    if digits[9] and digits[0]:
        final[25]+=1
    for i in range(len(final)):
        print(final[i]*chr(i+65),end='')
    print()
