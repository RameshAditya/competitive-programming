T=int(input())
for t in range(T):
    s=input()
    if s.count('a')<=s.count('b'):
        print(s.count('a'))
    else:
        print(s.count('b'))
