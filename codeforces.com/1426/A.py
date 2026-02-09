t = int(input())
for i in range(t):
    n, x = map(int, input().split())

    if n<=2:
        print(1)
    else:
        for j in range(1, 1000):
            if n<=j*x+2:
                print(j+1)
                break