T=int(input())
for t0 in range(T):
    instructs=int(input())
    address=[]
    directions=[]
    for instructs_ in range(instructs):
        s=list(input().split(" "))
        directions.append(s[0])
        s1=''
        for i in range(1,len(s)):
            s1+=str(s[i])+' '
        address.append(s1)
    print('Begin',address[len(address)-1],sep=' ')
    for j in range(len(address)-2,-1,-1):
        if directions[j+1]=='Left':
            print('Right',address[j],sep=' ')
        elif directions[j+1]=='Right':
            print('Left',address[j],sep=' ')
            
    print()
