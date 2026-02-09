S = input()

idx=1
check=True
while idx<16:
    if S[idx]=='1':
        check=False
        break
    idx+=2

if check:
    print("Yes")
else:
    print("No")