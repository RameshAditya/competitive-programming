globlength=0
def gcd(A,B):
    if B==0:
        return A
    else:
        return gcd(B,A%B)
def recurse(A,i,loclength):
    global globlength
    for z in range(i+1,len(A)-1):
        if gcd(A[i],A[i+z])!=1:
            loclength+=1
            recurse(A,i+z,loclength)
        else:
            recurse(A,i+1,loclength)
    if loclength>globlength:
        globlength=loclength
    if i==len(A)-1:
        return 1
print(globlength)
