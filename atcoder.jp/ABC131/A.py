S = input()

chk=True
for i in range(3):
    if S[i]==S[i+1]:
        chk=False
        break

if chk:
    print("Good")
else:
    print("Bad")