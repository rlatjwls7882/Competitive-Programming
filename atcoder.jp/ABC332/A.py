N, S, K = map(int, input().split())

cost=0
for i in range(0, N):
    P, Q = map(int, input().split())
    cost += P*Q

if cost>=S:
    print(cost)
else:
    print(cost+K)