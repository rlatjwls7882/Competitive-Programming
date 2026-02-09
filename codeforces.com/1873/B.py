t = (int)(input())

for i in range(t):
    n = (int)(input())
    a = list(map(int, input().split()))
    a = sorted(a)
    a[0]+=1

    max=1
    for j in a:
        max*=j
    print(max)