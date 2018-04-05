


lpf=[i for i in range(1001000)]

def prep():
    global lpf
    lpf[2]=2
    lpf[3]=3
    lpf[4]=4
    for i in range(2, 1001):
        if lpf[i]==i:
            for j in range(i*2,1001000,i):
                lpf[j]=i
    #print(lpf[1:10])

def fct(n):
    s=''
    ans=[]
    global lpf
    while n!=1:
        ct=1
        cur=lpf[n]
        if lpf[n]==lpf[n//lpf[n]]:
            while lpf[n]==lpf[n//lpf[n]]:
                ct+=1
                n=n//lpf[n]
            n=n//lpf[n]
        else:
            n=n//lpf[n]
        s=''
        #if ct>1:
        #    s+=str(cur)+'^'+str(ct)
        if True:
            s+=str(cur)
        #s+='x'
        ans.append(s)
        if n==1:
            break
    return 'x'.join(sorted(ans))+'x'

ncr=[[1 for i in range(1001)] for j in range(1001)]
def make():
    global ncr
    for n in range(1001):
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
                
