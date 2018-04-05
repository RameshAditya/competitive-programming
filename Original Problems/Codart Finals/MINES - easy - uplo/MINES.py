'''
MineSweeper is a game played on an NxM grid of pixels, where each pixel either is safe or has a bomb.

A safe pixel shows how many bombs there are, among its 8 neighbors (pixels sharing a side or a vertex).

Aditya is playing MineSweeper. But he used his programming skill to reveal the final board before he even makes his first move.

Obviously, he plays the game perfectly now since he can see where the bombs are. How would the final board look like?

Input:
T test cases (1<=T<=10)
For each test case,
Minesweeper board dimensions - 2 space separated integers N, M (2<=N,M<=100)
N rows of M space separated characters follow, either '.' (safe pixel) or '*' (bomb pixel)

Output:
The final board state without spaces, each bomb pixel is '*' while each safe pixel shows number of bomb pixels surrounding it.

Sample input:
1
3 3
. . *
. . .
. * .

Sample output:
01*
122
1*1

'''
T=int(input())
for tt in range(T):
    n,m=[int(i) for i in input().split(" ")]
    board=[]
    for i in range(n):
        X=[]
        a=input().split(" ")
        for i in a:
            if i=='.':
                X.append(0)
            elif i=='*':
                X.append(-1)
        board.append(X)
    for i in range(n):
        for j in range(m):
            if board[i][j]!=-1:
                continue
            if i==0 and j==0 and board[i][j]==-1: #top left corner
                if board[0][1]!=-1:
                    board[0][1]+=1
                if board[1][1]!=-1:
                    board[1][1]+=1
                if board[1][0]!=-1:
                    board[1][0]+=1
            if j!=0 and i==0 and board[i][j]==-1 and j!=m-1: #top row
                if board[i][j-1]!=-1:
                    board[i][j-1]+=1
                if board[i][j+1]!=-1:
                    board[i][j+1]+=1
                if board[i+1][j-1]!=-1:
                    board[i+1][j-1]+=1
                if board[i+1][j]!=-1:
                    board[i+1][j]+=1
                if board[i+1][j+1]!=-1:
                    board[i+1][j+1]+=1
            if i!=0 and j==0 and i!=n-1 and board[i][j]==-1: #left column
                if board[i-1][j]!=-1:
                    board[i-1][j]+=1
                if board[i+1][j]!=-1:
                    board[i+1][j]+=1
                if board[i-1][j+1]!=-1:
                    board[i-1][j+1]+=1
                if board[i][j+1]!=-1:
                    board[i][j+1]+=1
                if board[i+1][j+1]!=-1:
                    board[i+1][j+1]+=1
            if i!=0 and j==m-1 and i!=n-1 and board[i][j]==-1:  #right column
                if board[i-1][j]!=-1:
                    board[i-1][j]+=1
                if board[i+1][j]!=-1:
                    board[i+1][j]+=1
                if board[i-1][j-1]!=-1:
                    board[i-1][j-1]+=1
                if board[i][j-1]!=-1:
                    board[i][j-1]+=1
                if board[i+1][j-1]!=-1:
                    board[i+1][j-1]+=1            
            if j!=0 and i==n-1 and board[i][j]==-1 and j!=m-1:  #bottom row
                if board[i][j-1]!=-1:
                    board[i][j-1]+=1
                if board[i][j+1]!=-1:
                    board[i][j+1]+=1
                if board[i-1][j-1]!=-1:
                    board[i-1][j-1]+=1
                if board[i-1][j]!=-1:
                    board[i-1][j]+=1
                if board[i-1][j+1]!=-1:
                    board[i-1][j+1]+=1
            if i==0 and j==m-1 and board[i][j]==-1: #top right corner
                if board[0][m-2]!=-1:
                    board[0][m-2]+=1
                if board[1][m-2]!=-1:
                    board[1][m-2]+=1
                if board[1][m-1]!=-1:
                    board[1][m-1]+=1
            if i==n-1 and j==0 and board[i][j]==-1: #bottom left corner
                if board[n-2][0]!=-1:
                    board[n-2][0]+=1
                if board[n-2][1]!=-1:
                    board[n-2][1]+=1
                if board[n-1][1]!=-1:
                    board[n-1][1]+=1
            if i==n-1 and j==m-1 and board[i][j]==-1:   #bottom right corner
                if board[n-2][m-1]!=-1:
                    board[n-2][m-1]+=1
                if board[n-2][m-2]!=-1:
                    board[n-2][m-2]+=1
                if board[n-1][m-2]!=-1:
                    board[n-1][m-2]+=1
            if board[i][j]==-1 and i>=1 and j>=1 and i<n-1 and j<m-1:   #generic non boundary point
                if board[i-1][j-1]!=-1:
                    board[i-1][j-1]+=1
                if board[i-1][j]!=-1:
                    board[i-1][j]+=1
                if board[i-1][j+1]!=-1:
                    board[i-1][j+1]+=1
                if board[i][j-1]!=-1:
                    board[i][j-1]+=1
                if board[i][j+1]!=-1:
                    board[i][j+1]+=1
                if board[i+1][j-1]!=-1:
                    board[i+1][j-1]+=1
                if board[i+1][j]!=-1:
                    board[i+1][j]+=1
                if board[i+1][j+1]!=-1:
                    board[i+1][j+1]+=1
    for i in range(n):
        for j in range(m):
            if board[i][j]==-1:
                print("*",end="")
            else:
                print(board[i][j],end="")
        print()
