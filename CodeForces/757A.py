s=input()
check=['B','u','l','b','a','s','r']
occur=[0]*(len(check))
#print(check,occur)
ans=0
for i in s:
    if i in check:
        occur[check.index(i)]+=1
occur[1]//=2
occur[4]//=2
#print(check,occur)
print(min(occur))
