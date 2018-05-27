T = int(input())
for t in range(T):
    n, s, y = [int(i) for i in input().split(" ")]
    v = [int(i) for i in input().split(" ")]
    d = [int(i) for i in input().split(" ")]
    p = [int(i) for i in input().split(" ")]
    c = [int(i) for i in input().split(" ")]
    time = 0
    for i in range(n):
        c[i]+=10**(-6)
        if p[i]>=0 and d[i]==0:
            p[i]-=10**(-6)
        elif p[i]<=0 and d[i]==1:
            p[i]+=10**(-6)
    for i in range(n):
        if (p[i]<=0 and p[i]-c[i]<=0 and d[i]==1) or (p[i]>=0 and p[i]+c[i]>=0 and d[i]==0): #check for car going up or down
            wait = 0
            mid = 0
            if (abs(p[i])/v[i]) <= (y/s): 
                wait = abs(p[i])/v[i]
                time += wait
                mid = c[i]/v[i]
                time += mid
            time += y/s
 
            #update positions of next cars
            for j in range(i+1,n):
                if d[j]==1:
                    p[j] += v[j]*(wait+mid+(y/s))
                elif d[j]==0:
                    p[j] -= v[j]*(wait+mid+(y/s))
 
        #if completely gone
        elif (p[i]<0 and p[i]-c[i]<0 and d[i]==0) or (p[i]>0 and p[i]-c[i]>0 and d[i]==1): #just cross
            time += y/s
            for j in range(i+1,n):
                if d[j]==1:
                    p[j] += v[j]*(y/s)
                elif d[j]==0:
                    p[j] -= v[j]*(y/s)
                    
        elif (p[i]>0 and d[i]==1 and p[i]-c[i]<0) or (p[i]<0 and d[i]==0 and p[i]+c[i]>0): #wait for midway to go up or down
            if d[i]==1:
                dist = c[i]-p[i]
            else:
                dist = p[i]+c[i]
            wait = abs(dist)/v[i]
            time += wait
            time += y/s
            for j in range(i+1,n):
                if d[j]==1:
                    p[j] += v[j]*(wait+(y/s))
                elif d[j]==0:
                    p[j] -= v[j]*(wait+(y/s))
        elif p[i]==0 or p[i]+c[i]==0 or p[i]-c[i]==0:
            while True:
                d[i]=1
    print(time)
 
