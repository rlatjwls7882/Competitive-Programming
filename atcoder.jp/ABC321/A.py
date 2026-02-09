N = input()

decreasing=True
for i in range(1, len(N)):
    if(N[i-1]<=N[i]):
        decreasing=False
        break

if decreasing:
    print("Yes")
else:
    print("No")