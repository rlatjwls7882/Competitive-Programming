t = int(input())

for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    aMin = min(a)
    bMin = min(b)

    move=0
    for j in range(n):
        aMove = a[j]-aMin
        bMove = b[j]-bMin
        both = min(aMove, bMove)
        move += aMove+bMove-both
    print(move)