T = int(raw_input())
for t in range(T):
    n = int(raw_input())
    A = [int(i) for i in raw_input().split(" ")]
    hsh = [0]*(2005)
    for i in A:
        hsh[i+1000]+=1
        
    ct = 0
    for i in range(2002):
        ct += (hsh[i]*(hsh[i]-1))//2
        if hsh[i]:
            for j in range(1,2002):
                if i+2*j < 2005 and hsh[i+j] and hsh[i+2*j]:
                    ct += hsh[i]*hsh[i+2*j]
                    
    print(ct)
