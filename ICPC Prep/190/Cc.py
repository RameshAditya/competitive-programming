import sys

sys.setrecursionlimit(100000)

n=int(input())
s=input()
words=s.split(" ")

def brute(i):
    global words
    
    if words[i]=='int':
        print('int',end='')
        return i+1

    elif words[i]=='pair':
        print('pair<',end='')
        st=brute(i+1)
        print(',',end='')
        
        en=brute(st)
        print('>',end='')

        return en

ni=0
np=0
flag=1
for i in range(len(words)-1):
    ni+=(words[i]=='int')
    np+=(words[i]=='pair')
    if ni>np:
        flag=0
ni+=(words[-1]=='int')
np+=(words[-1]=='pair')
if flag==0 or words[-1]=='pair' or words[0]=='int' or ni!=np+1:
    print('Error occurred')
    
else:
    x=brute(0)

