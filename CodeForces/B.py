n=int(input())
x=0
y=0
s=input()
ans=2*min(s.count('L'),s.count('R')) + 2*min(s.count('U'),s.count('D'))
print(ans)
