n = int(input())

curSize=maxSize=0
for i in range(n):
    exit, enter = map(int, input().split())
    curSize += enter-exit
    maxSize = max(maxSize, curSize)
print(maxSize)