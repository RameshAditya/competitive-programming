A=[2,3,5,7,9]
for i in range(16):
    print(i, *[(A[x]^i) for x in range(5)], sum([A[x]^i for x in range(5)]))

'''
At i = 12, res = max = 54
A = [0010, 0011, 0101, 0111, 1001]
i =  1100

from 3 to 9 = index 2 to 5 = 5 - 1



find no of zeros, if greater than range/2, take inverse else dont.

8zct = 4>(5-4)
4zct = 3>(5-4)
2zct = 2<(5-2)
1zct = 1<(5-1)

o/p=[1110, 1111, 1001, 1011, 0101] = 14 + 15 + 9 + 11 + 5
'''

