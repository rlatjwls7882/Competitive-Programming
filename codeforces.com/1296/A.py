t = (int)(input())

for i in range(0, t):
    n = (int)(input())
    a = list(map(int, input().split()))

    odd=False
    even=False
    for j in range(0, n):
        if(a[j]%2==0):
            even=True
        else:
            odd=True
    
    if((odd and n%2==1) or (odd and even)):
        print("YES")
    else:
        print("NO")