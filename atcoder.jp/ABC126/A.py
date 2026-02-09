N, K = map(int, input().split())
S = input()

for i in range(N):
    if i==K-1:
        print(chr(ord(S[i])+32), end="")
    else:
        print(S[i], end="")