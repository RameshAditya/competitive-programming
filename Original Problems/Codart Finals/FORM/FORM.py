'''
Aditya is bored. So he asks Ramesh some Q number of questions for fun.

Each question is of the same type:

Given a whole number N, derive the general formula of (A+B)^N (raised to the power of N)

But Aditya thinks that's too easy, so he adds a twist. He wants Ramesh to express the coefficients in the ascending order of their
prime factors.

Ramesh solved this, and now asks you the same, to test your skill.

Input -
First line contains Q ( 1 <= Q <= 20)
Q lines follow, each line containing a single integer N. ( 0 <= N <= 19)

Output -
For each line, print the formula for (A+B)^N, with 'x' to represent multiplication and '+' to represent addition
between terms and '^' to represent powers of A and B larger than 1.

Sample -
5
0
1
2
3
4

Output -
1
A+B
A^2+2xAxB+B^2
A^3+3xA^2xB+3xAxB^2+B^3
A^4+2x2xA^3xB+2x3xA^2xB^2+2x2xAxB^3+B^4

'''
lpf=[i for i in range(100100)]

def prep():
    global lpf
    lpf[2]=2
    lpf[3]=3
    lpf[4]=4
    for i in range(2, 1001):
        if lpf[i]==i:
            for j in range(i*2,100100,i):
                lpf[j]=i
                
def fct(n):
    s=''
    ans=[]
    global lpf
    while n>1:
        ans.append(lpf[n])
        n=n//lpf[n]
    ans.sort()
    ans=[str(i) for i in ans]
    return 'x'.join(ans)+'x'

ncr=[[1 for i in range(101)] for j in range(101)]
def make():
    global ncr
    for n in range(101):
        for r in range(n+1):
            if r==0 or r==n:
                ncr[n][r]=1
            else:
                ncr[n][r]=ncr[n-1][r]+ncr[n-1][r-1]

prep()
T=int(input())
make()
for t in range(T):
    n=int(input())
    if n==0:
        print(1)
    elif n==1:
        print('A+B')
    else:
        print('A^'+str(n)+'+',end='')
        for i in range(1,n):
            if i!=1 and i!=n-1:
                print(fct(ncr[n][i])+'A^'+str(n-i)+'xB^'+str(i)+'+',end='')
            elif i==1 and n==2:
                print(fct(ncr[n][i])+'A'+'xB'+'+',end='')
            elif i==1:
                print(fct(ncr[n][i])+'A^'+str(n-i)+'xB'+'+',end='')
            elif i==n-1:
                print(fct(ncr[n][i])+'A'+'xB^'+str(i)+'+',end='')
        print('B^'+str(n))
