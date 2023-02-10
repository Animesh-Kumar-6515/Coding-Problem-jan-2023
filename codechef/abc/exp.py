for _ in range(int(input())):
  first = 1
  n = int(input())
  listx = [0] * n
  if n == 1:
    print(1)
  else:
    for i in range(0, n - 1, 2):
      listx[i] = first
      listx[i + 1] = 2 * first
      first += 2
    if n % 2:
      listx[n - 1] = listx[n - 2] + 1
    print(*listx)