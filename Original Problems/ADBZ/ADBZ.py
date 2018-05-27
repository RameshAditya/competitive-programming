import random
'''
Problem Statement:
Aditya is watching Dragon Ball Z, and Goku and Frieza are fighting (i.e. screaming and staring).

Frieza is charging from an initial power level A, at a rate f per second while Goku is charging from an initial level B at a rate g per second.

But with every passing ten seconds (i.e second 10,20,30 ...), their charging rate each goes to 99% of what it was, due to fatigue.

Find out if/when Goku surpasses (strictly greater than) Frieza's power.

Print -1 if the time it takes for Goku to exceed Frieza's power is more than 100 000.

Input Format -
Number of test cases (T) in the first line (1<=T<=100 005)
The next 4T lines contain, in each line
Frieza's initial power level (A) (0<=A<=100 005)
Frieza's rate of growth (f) (0<=f<=100 005)
Goku's initial power level (B) (0<=B<=100 005)
Goku's rate of growth (g) (0<=g<=100 005)



Sample Input -
1
100
30
80
50

After second 1 -
Frieza: 100 + 30 = 130
Goku: 80 + 50 = 130

After second 2 -
Frieza: 100 + 30 + 27 = 157
Goku: 80 + 50 + 45 = 175

O/P = 2
'''
file=open("ADBZ_input.txt","r")
file2=open("ADBZ_output.txt","w")
def brute(A,f,B,g):
    for x in range(-1,100000):
        #print(x,
        if A + f*( (1 - (0.99)**(x//10)) / 0.1 ) < B + g*( (1 - (0.99)**(x//10)) / 0.1 ):
            return x
            break

def help(A,f,B):
    #x=6500
    return (A+f*((1-(0.99)**(x//10))/0.1) - B)/(((1-(0.99)**(x//10))/0.1))


def check(A,f,b,g,x):
    return A + f*( (1 - (0.99)**(x//10)) / 0.1 ) < B + g*( (1 - (0.99)**(x//10)) / 0.1 )

def bs(A,f,b,g):
    if A<b:
        return 0
    lo=0
    hi=1000000
    if check(A,f,b,g,hi)==False:
        return -1
    while lo<hi:
        mid = (lo+hi)//2
        if(check(A,f,b,g,mid)==False):
            lo=mid+1
        else:
            hi=mid
    return lo


T=int(file.readline())
T=int(T)
x=1
for t in range(T):
    A=int(int(file.readline()))
    f=int(file.readline())
    B=int(file.readline())
    g=int(file.readline())
    file2.write(str((bs(A,f,B,g)))+"\n")

