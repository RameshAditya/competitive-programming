def cons(pat):
    lps=[0]*len(pat)
    i=1
    j=0
    while i<len(pat):
        if pat[i]==pat[j]:
            lps[i]=j+1
            i+=1
            j+=1
        else:
            if j!=0:
                j=lps[j-1]
            else:
                lps[i]=0
                i+=1
    return lps

def search(pat, txt):
    lps=cons(pat)
    times=0
    i=0
    j=0
    while i<len(txt):
        if pat[j]==txt[i]:
            i+=1
            j+=1
        if j==len(pat):
            times+=1
            j=lps[j-1]
        elif i<len(txt) and pat[j]!=txt[i]:
            if j!=0:
                j=lps[j-1]
            else:
                i+=1
    return times
T=int(input())
for t in range(T):
    n,m,le=[int(i) for i in input().split(" ")]
    txt=input()
    pattern=input()
    pat=pattern[:le]
    print(search(pat,txt))
