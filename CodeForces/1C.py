import math
def angle(x1,y1,x2,y2,x3,y3):
    if x1==x2:
        m1='a'
    else:
        m1=y2-y1/x2-x1
    if x3==x2:
        m2='b'
    else:
        m2=y3-y1/x3-x1
    if m1!='a' and m2!='b':
        if m1*m2==-1:
            return 90
        else:
            return math.degrees(math.atan((m2-m1)/(1+m1*m2)))
    elif m1=='a' and m2!='b':
        return 90-math.degrees(math.atan(m2))
    else:
        return 90-math.degrees(math.atan(m1))

