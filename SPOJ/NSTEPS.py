T=int(input())
for i in range(T):
    s=input().split(" ")
    x=int(s[0])
    y=int(s[1])
    while x>=0 and x<=10000 and y>=0 and y<=10000:
        s=[x,y]
        if int(s[1])%2==1:
            if s[0]==s[1]:
                print(2*int(s[1])-1)
            elif int(s[0])+2==int(s[1]):
                print(2*int(s[1])+1)
            else:
                print("No Number")
        else:
            if s[0]==s[1]:
                print(2*int(s[1]))
            elif int(s[0])==int(s[1])+2:
                print(2*int(s[1])+2)
            else:
                print("No Number")
