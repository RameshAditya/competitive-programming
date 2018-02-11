'''
Problem Statement:
Aditya was bored, and gave his friend Ramesh, a puzzle. The puzzle was pretty tricky for Ramesh,
and so he is now asking you to help him solve the puzzle cleverly.

Aditya gave Ramesh a string of digits. ( 4 <= |s| <= 1,00,000 and '0' <= Si <= '9')

Aditya then told Ramesh, to find the length of the longest "special" substring present in the given string.

When Ramesh asked, Aditya clarified saying that a "special" substring, was a substring which could be rearranged to form a palindrome,
and this palindrome could also be represented as the concatenation of two equally long even length palindromes.

Sample input 1 -
670001110123

Output 1 -
8

Explanation for Test Case 1 -
Index 2 to Index 9 is a special substring (00011101)
Upon rearranging, it CAN form 10011001, which can be further split up into two equally long even length palindromes - 1001 1001

Sample input 2 -
1212123434341234

Output 2 -
16

Explanation for Test Case 2 -
Index 0 to Index 15 form the longest special substring here,
upon rearranging can form 4213312442133124, which can be formed by equi-length palindromes 42133124 42133124
'''

A = [0]*10
fourpow=[1]*11
fourpow[1]=4

for i in range(2, 11):
    fourpow[i]=4*fourpow[i-1]

def hsh(A):
    global fourpow
    val=0
    for i in range(10):
        val = val + fourpow[i]*A[i]
    return val

vals = []
for i in range(1048580):
    vals.append([])

s = input()
vals[0].append(0)
cur=0
for i in range(len(s)):
    A[(ord(s[i]) - ord('0'))] += 1
    A[(ord(s[i]) - ord('0'))] %= 4
    cur = hsh(A)
    vals[cur].append(i+1)
ans=0
for i in range(1048580):
    if len(vals[i])>1:
        ans=max(ans, vals[i][-1] - vals[i][0])
print(ans)
