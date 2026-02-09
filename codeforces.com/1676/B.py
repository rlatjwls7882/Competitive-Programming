t = (int)(input())

for i in range(0, t):
    n = (int)(input())
    if(n==1):
        input()
        print(0)
    else:
        a = list(map(int, input().split()))
        min=a[0]
        for j in range(1, n):
            if(min>a[j]):
                min=a[j]

        eat=0
        for j in range(0, n):
            eat += a[j]-min
        print(eat)