from bisect import bisect, insort
for _ in range(int(input())):
    N, M = [int(i) for i in input().split()]
    ar = [int(i) for i in input().split()]

    c_sums = []
    final_sum = 0
    max_sum = 0

    for i in range(N):
        final_sum = (final_sum + ar[i]) % M
        pos = bisect(c_sums, final_sum)
        d = 0 if pos == i else c_sums[pos]
        max_sum = max(max_sum, (final_sum + M - d) % M)
        insort(c_sums, final_sum)

    print(max_sum)