T=int(input())
for t in range(T):
    n=int(input())
    if n<=100:
        X=[]
        Y=[]
        for j in range(n):
            x, y = [int(i) for i in input().split(" ")]
            X.append(x)
            Y.append(y)
        ct=0
        ans=[]
        i=0
        j=0
        for i in range(n):
            for j in range(min(i+n//2, n-5),n):
                if ((X[i]+X[j])//2, (Y[i]+Y[j])//2) not in ans:
                    ct+=1
                    ans.append(((X[i]+X[j])//2, (Y[i]+Y[j])//2))
        #print(ans)
        if ct<n//10:
            print(-1)
        else:
            for i in range(n//10):
                print(ans[i][0], ans[i][1])

    else:
        X=[]
        Y=[]
        for j in range(n):
            x, y = [int(i) for i in input().split(" ")]
            X.append(x)
            Y.append(y)
        doneyet=[]
        ct=0
        i=0
        while i<n//10:
            if ct==n//10:
                break
            xc = (i%3 + 1)*X[i] + (i%3 + 3)*X[i+n//3] + (i%3 + 1)*X[i+2*n//3]
            xc//=3
            
            yc = (i%3 + 1)*Y[i] + (i%3 + 3)*Y[i+n//3] + (i%3 + 1)*Y[i+2*n//3]
            yc//=3
            if (xc, yc) not in doneyet:
                doneyet.append((xc, yc))
                ct+=1
                #print((X[i%n] + X[ (n//2+i)%n ])//2, (Y[i%n] + Y[(i+n//2)%n])//2)
            i+=1
        if ct!=n//10:
            print(-1)
        else:
            for i in doneyet:
                print(i[0], i[1])
