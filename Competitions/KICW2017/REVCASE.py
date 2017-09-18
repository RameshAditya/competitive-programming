s=list(input())
for i in s:
    if i.isupper():
        print(chr(ord(i)-ord('A')+ord('a')),end='')
    else:
        print(chr(ord(i)-ord('a')+ord('A')),end='')
print()
