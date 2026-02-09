A, B = map(int, input().split())

if max(A, B)<min(A, B)+3:
  print("Yes")
else:
  print("No")