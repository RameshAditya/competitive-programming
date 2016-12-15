T=int(input())
for t in range(T):
    n=int(input())
    ans=0
    cash=n
    ans+=cash//100
    cash=cash%100
    ans+=cash//50
    cash=cash%50
    ans+=cash//10
    cash=cash%10
    ans+=cash//5
    cash=cash%5
    ans+=cash//2
    cash=cash%2
    ans+=cash//1
    print(ans)
