T=int(input())
for t in range(T):
    n=int(input())
    fin = [int(i) for i in input().split(" ")]
    glo = [int(i) for i in input().split(" ")]
    front = 1
    back = 1

    for i in range(n):
        if fin[i]>glo[i]:
            front = 0
    for i in range(n):
        if fin[n-i-1]>glo[i]:
            back = 0
    if front==1 and back==1:
        print('both')
    elif front:
        print('front')
    elif back:
        print('back')
    else:
        print('none')
