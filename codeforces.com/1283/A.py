t = int(input())

for i in range(t):
    H, M = map(int, input().split())
    print(1440-(H*60+M))