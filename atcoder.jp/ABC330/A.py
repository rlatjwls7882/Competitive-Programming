N, L = map(int, input().split())
scores = list(map(int, input().split()))

cnt=0
for i in range(0, N):
  if scores[i]>=L:
    cnt+=1
print(cnt)