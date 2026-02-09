N = int(input())
S = input()

if S.__contains__("ABC"):
    print(S.index("ABC")+1)
else:
    print(-1)