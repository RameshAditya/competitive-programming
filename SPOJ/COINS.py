def compute(x):
    if x%3==0 and x%2==0 and x!=0:
        return compute(x//3)+ compute(x//4)+ compute(x//2)
    elif x%3==0 and x!=0 and x>3:
        return compute(x//3)+ compute(x//4)+ compute(x//2)
    elif x%2==0 and x>2:
        return compute(x//3)+ compute(x//4)+ compute(x//2)
    else:
        return x
'''x=input()
blank='\n'
while x!=blank:
    print(compute(int(x)))
    x=input()'''
try:
    while True:
        n = int(input())
        print(compute(n))
except:
    pass
