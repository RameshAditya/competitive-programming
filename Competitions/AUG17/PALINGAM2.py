#Either B is subset of A(3 chars), or A is subset of B(2 chars), or partial/null intersection(s1+s2 chars)
#If B is subset of A, A has to play a dummy character not in B, if he can't B wins. if he can, A wins.
#If A is subset of or equal to B, A is screwed.
#Else not a palindrome

T=int(input())
for t in range(T):
    s1=input()
    s2=input()
    oa=[0]*26
    ob=[0]*26
    anyout=0
    for i in s1:
        oa[ord(i)-ord('a')]+=1
    for i in s2:
        ob[ord(i)-ord('a')]+=1

    for i in range(26):
        if oa[i] and not ob[i]:
            anyout=1
    if anyout==0:
        print('B')
    else:
        anys=0
        for i in range(26):
            if ob[i] and not oa[i]:
                anys=1
        if anys==0:
            print('A')
        else:
            poss=0
            for i in range(26):
                if oa[i]>=2 and not ob[i]:
                    poss=1
            if poss:
                print('A')
            else:
                print('B')
