'''
IP: 4 3 2 1
OP: 1 2 3 2

from end
10 6 3 1

from front
4 7 9 10

for 4 = (0, 8) = 1
for 3 = (4,10) = 2

in forward dn
A[x] - sum(x+1:y) <= A[y+1]
 ---current valid valid valid invalid invalid invalid---
 ---d[i]+=1            d[i]-=1---

4 7 9 10
1 

in back dn

A[x] - sum(z:x-1) <= A[z-1]

--- invalid invalid invalid valid valid valid current---
'''

def bs_inc(A, ind, pref):
    lo = ind
    hi = len(A)-1
    mid = len(A)-1
    while lo<hi:
        mid = (lo+hi+1)//2
        #print(lo,mid,hi, 'a', sum(A[ind+1:mid+1]))
        if A[ind] >= sum(A[ind+1:mid+1]):
            lo = mid
        else:
            hi = mid-1
    
    return mid+1
    #returns right index of vote range

def bs_dec(A, ind, suf):
    hi = ind-1
    lo = -1
    mid = ind-1

    while lo<hi:
        mid = (lo+hi)//2
        #print(lo,mid,hi, 'a', sum(A[mid:ind]))
        if A[ind] >= sum(A[mid:ind]):
            hi = mid
        else:
            lo = mid+1
    return mid

def brute(A):
    n = len(A)
    op=[0]*len(A)
    for i in range(n):
        for j in range(n):
            if i<j and A[j] >= sum(A[i+1:j]):
                op[i]+=1
            elif i>j and A[j] >= sum(A[j+1:i]):
                op[i]+=1
    print('brute:',*op)

#T=int(input())
#for t in range(T):
#    n=int(input())
#    A=[int(i) for i in input().split(" ")]
A = [int(i) for i in input().split(" ")]
n = len(A)

#A = [4,3,2,1]
pref=[4,7,9,10]

#suf=[10,6,3,1]

#for i in range(4):
#    print(bs_dec(A,i,pref))

op = [0]*n
for i in range(n):
    print(bs_dec(A, i, pref),bs_inc(A, i, pref) )
    for j in range(i+1,min(n,bs_inc(A, i, pref))):
        op[j]+=1
    for k in range(i-1,max(-1,bs_dec(A,i,pref)-1),-1):
        op[k]+=1
        
print(*op)
brute(A)
#OP(inc): 2 4 4 4
#OP(dec): -1 -1 0 1 (i.e keep going till you see this index)


'''2 1 3 100 5'''

'''
0 1 2 2
1 1 1 0

1 2 3 2
'''
