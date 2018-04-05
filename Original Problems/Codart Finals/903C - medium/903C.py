'''
Aditya has got n empty boxes. For every i (1 ≤ i ≤ n), i-th box is a cube with side length ai.

Aditya can put a box i into another box j if the following conditions are met:

1. i-th box is not put into another box
2. j-th box doesn't contain any other boxes;
3. Box i is smaller than box j (ai < aj).

Aditya can put boxes into each other an arbitrary number of times. He wants to minimize the number of visible boxes. A box is called visible iff it is not put into some another box.

Help Aditya to determine the minimum possible number of visible boxes!

Input
The first line contains T, the number of test cases (1 ≤ T ≤ 10)

The first line contains one integer n (1 ≤ n ≤ 500) — the number of boxes Aditya has got.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 1000), where ai is the side length of i-th box.

Output
Print the minimum possible number of visible boxes.

Sample input
2
3
1 2 3
4
4 2 4 3
output
1
2

Explanation

In the first example it is possible to put box 1 into box 2, and 2 into 3.
In the second example Aditya can put box 2 into box 3, and box 4 into box 1.
'''
T=int(input())
for t in range(T):
    n=int(input())
    A=[int(i) for i in input().split(" ")]
    res=0
    for i in A:
        res=max(res,A.count(i))
    print(res)
