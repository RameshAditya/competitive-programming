T=int(input())
for t in range(T):
    gl=[]
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    gl.append(A)
    ct=0
    i=0
    while i<=ct:
        ch=0
        for j in range(len(gl[i])-1):
            if j==len(gl[i])-2 and gl[i][j]!=0 and gl[i][j+1]!=0:
                gl[i].append(1)
                gl[i][j]-=1
                gl[i][j+1]-=1
                if gl[i] not in gl:
                    gl.append(gl[i])
                    ct+=1
                    ch=1
                gl[i]=gl[i][:-1]
                gl[i][j]+=1
                gl[i][j+1]+=1
            if j<len(gl[i])-2:
                if gl[i][j]!=0 and gl[i][j+1]!=0:
                    gl[i][j+2]+=1
                    gl[i][j+1]-=1
                    gl[i][j]-=1
                    if gl[i] not in gl:
                        gl.append(gl[i])
                        ct+=1
                        ch=1
                    gl[i][j]+=1
                    gl[i][j+1]+=1
                    gl[i][j+2]-=1
        print(gl)
        i+=1
        if ch:
            i=0
    print(gl)
