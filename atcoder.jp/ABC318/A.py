N, M, P = map(int, input().split())

cnt=0
while M<=N:
    cnt+=1
    M += P
print(cnt)