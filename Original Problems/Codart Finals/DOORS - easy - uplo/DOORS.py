'''
Aditya is in a hotel having N doors numbered from 1 to N.

He, being childish, runs from door 1 to N and opens every door.

Then he goes back to door 2 and opens every alternating door till door N.

Then he goes back to door 3 and opens every third door till door N.

He keeps going back and opening doors, N times.

Find the number of doors that are left open at the end.

Input:
T Test cases (1<=T<=1000)
Each test case contains a single integer N (1<=N<=1000)

Output:
For each test case, print the number of open doors

Sample input:
1
6

Sample output:
2

Explanation:
First run: All doors are opened.
Second run: 2, 4, 6 are closed.
Third run: 3 is closed, 6 is opened.
Fourth run: 4 is opened.
Fifth run: 5 is closed.
Sixth run: 6 is closed.

'''
sq=[]
for i in range(1,50):
    sq.append(i*i)
#print('-----------------------------')
T=int(input())
for t in range(T):
    n=int(input())
    i=0
    while i<50 and sq[i]<=n:
        i+=1
 #   print('--------------------')
    print(i)
