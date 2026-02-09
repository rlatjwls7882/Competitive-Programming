pos = []
pos.append(int(input()))
pos.append(int(input()))
pos.append(int(input()))
pos.append(int(input()))
pos.append(int(input()))
k = int(input())

pos.sort()
if pos[4]-pos[0]>k:
    print(":(")
else:
    print("Yay!")