times = [[0,5],[3,10],[5,14],[6,15]]
values = [10,8,7,8]

#call f(-1,0)
def f(prev, cur):
    if prev==-1 and cur<len(times):
        return max(values[cur] + f(cur, cur+1), f(-1, cur+1))
    if cur >= len(times):
        return 0
    if times[prev][1]<times[cur][0]:
        return max(f(prev,cur+1), values[cur] + f(cur,cur+1))
    return f(prev, cur+1)
