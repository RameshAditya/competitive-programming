def swap(D,T,S,i1,i2):
  D[i1], D[i2] = D[i2], D[i1]
  T[i1], T[i2] = T[i2], T[i1]
  S[i1], S[i2] = S[i2], S[i1]
 
def partition(D,T,S,g,p):
    for j in range(g,p):
      if D[j] < D[p] or (D[j]==D[p] and S[j]>=S[p]):
        swap(D,T,S,j,g)
        g += 1
    swap(D,T,S,p,g)
    return g
 
def _quicksort(D,T,S,s,e):
    if s >= e:
      return
    p = partition(D,T,S,s,e)
    _quicksort(D,T,S,s,p-1) 
    _quicksort(D,T,S,p+1,e)
    
def quicksort(D,T,S):
    _quicksort(D,T,S,0,len(D)-1)
 
T=int(input())
for t in range(T):
    n,d=map(int,input().split(" "))
    DD=[]
    TT=[]
    SS=[]
    totsad=0
    for i in range(n):
        di,ti,si=map(int,input().split(" "))
        DD.append(di)
        TT.append(ti)
        SS.append(si)
        totsad+=ti*si
    #print('Before')
    #print(DD,TT,SS,sep='\n')
    #print('After')
    quicksort(DD,TT,SS)
    #print(DD,TT,SS,sep='\n')
    days=[0 for i in range(d)]
    i=0
    curperson=0
    daysleft=d
    daysdone=[0 for i in range(n)]
    #print(totsad)
    #print(DD,TT,SS)
    print(DD)
    for i in range(d):
        if days[i]==0:
            j=0
            maxpersonind=0
            maxsad=0
            while j<n and DD[j]-1<=i:
                #print('i',i,'j',j,DD[j],TT[j])
                if TT[j]>0:
                    #print('On day',i,'prof',j,'teaches')
                    if SS[j]>maxsad:
                        maxsad=SS[j]
                        maxpersonind=j   
                j+=1
            TT[maxpersonind]-=1
            totsad-=maxsad #SS[maxpersonind]
            #print('mpi',maxpersonind)
            days[i]=1
    print(totsad)
