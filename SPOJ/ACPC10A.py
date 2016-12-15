s=input().split(" ")
while(s[0]!='0' or s[1]!='0' or s[2]!='0'):
    if int(s[0])==int(s[1]) and int(s[1])==int(s[2]) and int(s[0])==1:
        print("AP",1)
    if int(s[0])+int(s[2])==2*int(s[1]):
        print("AP",2*int(s[2])-int(s[1]))
    else:
        print("GP",int(int(s[2])*int(s[2])/int(s[1])))
    s=input().split(' ')
