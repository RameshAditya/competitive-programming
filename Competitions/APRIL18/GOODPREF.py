import math
import random
def brute(s,n):
    ct=0
    cur=0
    s=s*n
    for i in s:
        if i=='a':
            cur+=1
        if i=='b':
            cur-=1
        if cur>0:
            ct+=1
    #print('B',ct)
     
    return ct
state = []
ans = 0
def fast(s,n):
    global state,ans
    state = [0 for i in range(len(s))]
    cur = 0
    ans = 0
    for i in range(len(s)):
        if s[i]=='a':
            cur+=1
            state[i]=cur
        elif s[i]=='b':
            cur-=1
            state[i]=cur
        if state[i]>0:
            ans+=1
    if n==1:
        return ans
    
    totalsum = state[-1]
    if totalsum==0:
        ans = ans*n
        
    if totalsum>0:
        for i in range(len(state)):
            if state[i]==0:
                ans += (n-1)
            if state[i]>0:
                ans += (n-1)
            if state[i]<0: 
                x = 1
                #while x<n and totalsum*x + state[i]<=0:
                #    x+=1
                x = -state[i]//totalsum - 1000
                x = max(x, 1)
                while x<n and totalsum*x + state[i]<=0:
                    x+=1
                ans += n-x
        
    if totalsum<0:
        for i in range(len(state)):
            if state[i]==0:
                ans += 0
            if state[i]<0:
                ans += 0
            if state[i]>0:
                x = n-1

                #while x>0 and totalsum*x + state[i]<=0: #state[i] - abs(totalsum)*x<=0: #-> abs(totalsum)*x >= state[i]
                #    x-=1

                x = -state[i]//totalsum + 500
                x = min(x, n-1)
                while x>0 and state[i] - abs(totalsum)*x <= 0:
                    x-=1
                
                ans += x
            return ans

T = int(input())
for t in range(T):
    s,n = input().split(" ")
    n = int(n)
    F = fast(s,n)
    print(F)
