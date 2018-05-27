s = input()
v = [1 for i in range(len(s))]

for i in range(len(s)-2):
    if s[i]==s[i+1] and s[i+1]==s[i+2]:
        v[i] = 0

x = ''
for i in range(len(s)):
    if v[i]:
        x+=s[i]

v = [1 for i in range(len(s))]
for i in range(len(s)-4):
    if v[i] and v[i+1] and v[i+2] and v[i+3] and s[i]==s[i+1] and s[i+2]==s[i+3]:
        v[i+2]=0
print(x)
