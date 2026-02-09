N, X = map(int, input().split())
S = list(map(int, input().split()))

sum=0
for i in S:
    if(i<=X):
        sum+=i
print(sum)