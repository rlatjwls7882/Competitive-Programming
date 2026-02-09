t = int(input())

for i in range(t):
    a, b, c, n = map(int, input().split())
    n -= 3*max(a, b, c)-a-b-c

    if n>=0 and n%3==0:
        print("YES")
    else:
        print("NO")