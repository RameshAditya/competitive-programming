s=input()
n=len(s)
ans=''
if len(s)==1:
    if s=='1':
        ans+='one'
    elif s=='2':
        ans+='two'
    elif s=='3':
        ans+='three'
    elif s=='4':
        ans+='four'
    elif s=='5':
        ans+='five'
    elif s=='6':
        ans+='six'
    elif s=='7':
        ans+='seven'
    elif s=='8':
        ans+='eight'
    elif s=='9':
        ans+='nine'
    elif s=='0':
        ans+='zero'
else:
    if s=='10':
        ans='ten'
    if s=='11':
        ans='eleven'
    elif s=='12':
        ans='twelve'
    elif s=='13':
        ans='thirteen'
    elif s=='14':
        ans='fourteen'
    elif s=='15':
        ans='fifteen'
    elif s=='16':
        ans='sixteen'
    elif s=='17':
        ans='seventeen'
    elif s=='18':
        ans='eighteen'
    elif s=='19':
        ans='nineteen'
    elif int(s)>=20 and int(s)<30:
        ans='twenty'
    elif int(s)>=30 and int(s)<40:
        ans='thirty'
    elif int(s)>=40 and int(s)<50:
        ans='forty'
    elif int(s)>=50 and int(s)<60:
        ans='fifty'
    elif int(s)>=60 and int(s)<70:
        ans='sixty'
    elif int(s)>=70 and int(s)<80:
        ans='seventy'
    elif int(s)>=80 and int(s)<90:
        ans='eighty'
    elif int(s)>=90 and int(s)<100:
        ans='ninety'
    if int(s)>=20:
        if s[1]=='1':
            ans+='-one'
        elif s[1]=='2':
            ans+='-two'
        elif s[1]=='3':
            ans+='-three'
        elif s[1]=='4':
            ans+='-four'
        elif s[1]=='5':
            ans+='-five'
        elif s[1]=='6':
            ans+='-six'
        elif s[1]=='7':
            ans+='-seven'
        elif s[1]=='8':
            ans+='-eight'
        elif s[1]=='9':
            ans+='-nine'
        elif s[1]=='0':
            ans+=''
print(ans)
