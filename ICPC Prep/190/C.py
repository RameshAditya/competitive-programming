'''n=int(input())
words=[i for i in input().split(" ")]
sz=[0]*len(words)

#impossible case
ni=0
np=0
for i in range(len(words)-1):
    if words[i]=='int':
        ni+=1
    else:
        np+=1
    
#if (ni!=np+1) or (not (ni<=np and words[-1]=='int')):
#    print('Error occurred')
if True:
    st=[]
    for i in range(len(words)):
        if words[i]=='pair':
            print('pair<',end='')
            st.append(i)
        elif len(st)>0 and words[i]=='int':'''
            
                


            '''
            if sz[st[-1]]==0:
                print('int,',end='')
                sz[st[-1]]=1
            elif sz[st[-1]]==1:
                print('int>',end='')
                sz[st[-1]]=2
                sz.pop()
            elif len(st)>0 and sz[st[-1]]==1:
                print('>',end='')
                st.pop()
                sz[st[-1]]=2
            elif len(st)>0 and sz[st[-1]]==0:
                print(',',end='')
                sz[st[-1]]=1
        
            '''
n=int(input())
words=[str(i) for i in input().split()]
pair=[]
curr=-1
ni=0
np=0
for i in words:
    if(i=='pair'):
        np+=1
        pair.append(1)
        curr+=1
        print('pair<')
    elif(i=='int'):
        ni+=1
        if(len(pair)==0 ni+1>np):
            print('Error Occured')
        else:
            pair[curr]+=1
            if(pair[curr]==2):
                print('int,')
            elif(pair[curr]==3):
                print('int>')
                curr-=1
                pair.pop()
    
    
