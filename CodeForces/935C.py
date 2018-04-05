R, x1, y1, x2, y2 = [int(i) for i in input().split(" ")]

'''

if (x2,y2) is within circle:
	r = (R + d)/2
	d = sqrt((x1-x2)^2 + (y1-y2)^2)

	output g, h, w
else
	output x1, y1, R

'''

d = ( (x1-x2)**2 + (y1-y2)**2 )**0.5
omega = R + d

omega = omega/2

