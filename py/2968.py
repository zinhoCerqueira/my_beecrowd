from math import ceil

v, n = map(int, input().split())

total = v * n

for i in range(1, 10):
    print(ceil(total * i / 10), end=" ")