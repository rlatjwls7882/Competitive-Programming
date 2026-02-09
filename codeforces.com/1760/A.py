t = int(input())

for i in range(t):
    num = list(map(int, input().split()))
    num = sorted(num)
    print(num[1])