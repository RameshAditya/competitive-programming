'''
Medium 1
Aditya, the daredevil is standing in the center of a room.

The room is L centimeters long in the X-axis, B centimeters wide in the Y-axis,
and W centimeters tall in the Z-axis.

He daringly fires a gun at a wall from a given coordinate, at a certain angle, and wants to know if the bullet after rebounding a few
times might ever hit his head within T seconds (inclusive)

Aditya's feet are at (L/2, B/2, 0) and his head is at a height H.

He knows the initial coordinates of the bullet, and he also knows length, width and height the bullet covers in every second and
asks you to tell him if the bullet will hit his head or not.

Input:
Number of test cases in first line (TC)
TC lines follow, the first line consisting of three space-separated integers, L, B and W (dimensions of room)
The next line contains three space separated integers, the initial coordinates of the bullet XB, YB, ZB
The next line contains H, (Aditya's height)
The next line contains the distances the bullet covers in the X, Y and Z axes respectively LB, BB, WB
The last line of each test case contains the time Aditya wants to last until, T.

Constraints:
1 <= TC <= 1000
1 <= L,B,W <= 10,000
1 <= XB, YB, WB <= 10,000
100 <= H <= 250
1 <= LB,BB,WB <= 100,000
1 <= T <= 1000

Output:
For each test case, print "Lucky" or "Unlucky" without quotes.

Sample:
2
1000 1000 1000
520 500 183
183
500 0 0
5
1000 1000 1000
520 500 183
183
500 0 0
1

Output:
Unlucky
Lucky

Explanation:
In the first test case, The bullet covers 500cm every second about the X-axis, and doesn't travel any distance across the Y or Z axes. It will rebound, and
hit Aditya before time = 2 seconds, at coordinate (500, 500, 183)

T
