A = [1, 2, 1, 2, 2]
def f(start, end, current):
    n = len(A)
    if current>end or current<start:
        print(current)
        return 0
    return A[current] + min(f((current-1)%n), f((current+1)%n))
