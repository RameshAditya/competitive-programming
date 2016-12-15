n=1
x=[]
while(n!=0):
    n=int(input())
    s=input().split(" ")
    stack=[]
    final=[]
    flag=0
    a=[]
    for i in s:
        if i!='':
            a.append(i)
    s=a
    print('s',s)
    for i in range(n):
        if i<n-1:
            if s[i]>s[i+1]:
                stack.append(s[i])
            else:
                final.append(s[i])
            if len(stack)>0:
                if stack[len(stack)-1]<s[i+1]:
                    final.append(stack[len(stack)-1])
                    del(stack[len(stack)-1])
        if i==n-1:
            if len(stack)>0:
                if stack[len(stack)-1]<s[n-1]:
                    final.append(stack[len(stack)-1])
                    del(stack[len(stack)-1])
            else:
                stack.append(s[n-1])
        '''if len(stack)>0:
            if stack[len(stack)-1]>s[i]:
                stack.append(s[i])'''
        print('i',i,'\nstack',stack,'\nfinal',final)
    for i in range(len(stack)-1,-1,-1):
        final.append(stack[i])
    print('final final',final)
    for i in range(len(final)-1):
        if final[i]>final[i+1]:
            flag=1
            break
        else:
            continue
    print("no") if flag==1 else print("yes")
