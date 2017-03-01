s1=input()
s2=input()
s3=input()
s1+=s2
s1=sorted(s1)
s3=sorted(s3)
print("NO") if ''.join(s1)!=''.join(s3) else print("YES")
