for tt in range(int(input())):
    n=input()
    s=input().split(" ")
    l=[int(x) for x in input().split(" ")]
    t=True
    if min(l)<15:
    	t=False
    if len(set(s))==1 and t:
        print("Party")
    else:
        print("No Party")
