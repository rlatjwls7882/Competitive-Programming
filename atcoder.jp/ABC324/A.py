N = int(input())
a = input().split()

check=True
for i in range(1,N):
    if(a[0]!=a[i]):
        check=False
        break

if check:
    print("Yes")
else:
    print("No")