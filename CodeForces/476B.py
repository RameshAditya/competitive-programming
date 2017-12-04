a=input()
b=input()
np=a.count('+')
nm=a.count('-')

curp=b.count('+')
curm=b.count('-')
curq=b.count('?')
if nm>=curm and np>=curp and np-curp + nm-curm == curq:
    print( 1 - (np-curp)*(nm-curm) / (1<<curq) )
else:
    print(0)
