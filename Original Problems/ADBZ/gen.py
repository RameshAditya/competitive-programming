import random
import math
def help(A,f,B,x):
    return (A+f*((1-(0.99)**(x//10))/0.1) - B)/(((1-(0.99)**(x//10))/0.1))

file=open("ADBZ_input.txt","w")

T=100000
file.write(str(T)+"\n")
for t in range(T):
    A=random.randint(100,100000)
    file.write(str(A)+"\n")
    f=random.randint(10,10000)
    file.write(str(f)+"\n")
    B=random.randint(max(0, A-1000),A)
    file.write(str(B)+"\n")
    x=random.randint(10,50000)
    g=help(A,f,B,x)
    file.write(str(math.ceil(g))+"\n")
    #print('(',x,')')
