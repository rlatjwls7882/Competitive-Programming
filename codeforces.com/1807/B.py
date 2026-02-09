t = int(input())

while t>0:
    t-=1
    n = int(input())
    a = list(map(int, input().split()))

    sum1=sum2=0
    for i in range(n):
        if a[i]%2==0:
            sum1+=a[i]
        else:
            sum2+=a[i]
    
    if sum1>sum2:
        print("YES")
    else:
        print("NO")