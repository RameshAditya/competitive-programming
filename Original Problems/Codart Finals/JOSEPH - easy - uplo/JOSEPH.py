'''
Aditya is playing a video game. This is a game based on luck.

Or so it seemed. Aditya was smart though, he saw a pattern and took advantage.

He now tells you the game, can you find the pattern to beat the game too?

The game is as follows -

There are N players standing in a circle, numbered from 1 to N.

Player 1 has a gun. He shoots Player K+1. Then he hands the gun to the next
available player X, who shoots Player K+X. Then player X hands the gun to the
next available player and so on.

Find the last man standing.

Input:
T test cases (1<=T<=100)
Each line consists of two space separated numbers, N and K.
1<=N<=100
1<=K<=50

Output:
For each test case, output the number of the player still alive.

Sample input:
1
5 1

Sample Output:
3

Explanation:
1 kills 2 and gives gun to 3. 3 kills 4 and gives gun to 5. 5 kills 1 and gives gun to 3. 3 kills 5.
'''

def solve(n, k):
    if n==1:
        return 1
    else:
        return (solve(n-1,k) + k-1)%n + 1

T=int(input())
for t in range(T):
    n, k = [int(i) for i in input().split(" ")]
    print(solve(n,k+1))
