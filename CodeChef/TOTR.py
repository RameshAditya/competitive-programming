def convert(bytecipher,string,alphabet):
    ans=''
    for i in string:
        if i=='_':
            ans+=' '
        elif not i.isalpha():
            ans+=i
        
        else:
            ans+=bytecipher[alphabet.index(i)]
    return ans
s=input().split(" ")
T=int(s[0])
bytecipher=s[1].lower()+s[1].upper()
alphabet='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
for t in range(T):
    string=input()
    print(convert(bytecipher,string,alphabet))
