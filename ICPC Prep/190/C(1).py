n=int(input())
words=[str(i) for i in input().split()]
pair=[]
curr=-1
ni=0
np=0

for i in range(len(words)):
    if words[i]=='int':
        ni+=1
    else:
        np+=1
if words[-1]!='int' or (ni!=np+1) or (not (ni==np+1 and words[-1]=='int')) or words[0]=='int':
    print('Error occurred')

else:
    for i in range(len(words)):
        if(words[i]=='pair'):
            #print('he')
            np+=1
            pair.append(1)
            curr+=1
            print('pair<',end='')
        elif(words[i]=='int'):
            ni+=1
            '''if(len(pair)==0 or ni+1==np):
                print('Error Occured')
                break'''
            if(1):
                pair[curr]+=1
                if(i==len(words)-1 and words[i]=='int'):
                    print('int>')
                elif(pair[curr]==2):
                    if(i!=len(words)-1):
                        print('int,',end='')
                    else:
                        print('int>',end='')
                elif(pair[curr]==3):
                    print('int>,',end='')
                    curr-=1
                    pair.pop()
