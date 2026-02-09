n, m = map(int, input().split())

prime = [True]*(m+1)

for i in range(2, m+1):
    if prime[i]:
        j=i*i
        while j<=m:
            prime[j]=False
            j+=i

check=True
for i in range(n+1, m+1):
    if prime[i] and i!=m or not prime[m]:
        check=False
        break

if check:
    print("YES")
else:
    print("NO")