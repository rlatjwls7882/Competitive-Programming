N, A, X, Y = map(int, input().split())

sum=0
for i in range(0, N):
    if i<A:
        sum += X
    else:
        sum += Y
print(sum)