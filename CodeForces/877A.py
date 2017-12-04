n=['Danil','Olya','Slava','Ann','Nikita']
s=input()
c=0
for j in range(len(n)):
    for i in n:
        if j+len(i)<len(s) and s[j:j+len(i)] in n:
            c+=1

#print(c)
print('YES') if c==1 else print('NO')
