
T=int(input())
sq={}
for i in range(1,10001):
    sq.append(i*i)

for t in range(T):
    x=int(input())
    f=0
    if x==0:
        print(1,1)
        continue
    else:
        for i in range(len(sq)):
            for j in range(i+1):
                if f==0 and sq[j]==sq[i]-x:
                    f=1
                    print(int(sq[i]**0.5),int(sq[j]**0.5))
                    break
        if f==0:
            print(-1)

    
