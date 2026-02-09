t = int(input())

for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    odd=even=0
    for j in range(2*n):
        if a[j]%2==0:
            even+=1
        else:
            odd+=1
    
    if even==odd:
        print("Yes")
    else:
        print("No")