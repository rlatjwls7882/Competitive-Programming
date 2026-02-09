t = (int)(input())

for i in range(0, t):
    a, b = map(int, input().split())
    if a>b:
        if (a-b)%2==1:
            print(2)
        else:
            print(1)
    elif b>a:
        if(b-a)%2==0:
            print(2)
        else:
            print(1)
    else:
        print(0)