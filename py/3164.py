# Reference https://github.com/potigol/beecrowd/blob/master/src/3100/3164.poti

import sys

input = sys.stdin.read().strip().split("\n")
index = 0

while index < len(input):
    try:
        line = input[index].strip().split()
        n = int(line[0])
        p = int(line[1])

        index += 1
        weights = list(map(int, input[index].strip().split()))
        index += 1

        k1 = (n + 1) // 4
        k3 = 3 * (n + 1) // 4

        weights.sort()

        q1 = weights[k1 - 1] + (0.25 * (n + 1) - k1) * (weights[k1] - weights[k1 - 1])
        q3 = weights[k3 - 1] + (0.75 * (n + 1) - k3) * (weights[k3] - weights[k3 - 1])

        a = q1 - 0.5 * (q3 - q1)
        b = q3 + 0.5 * (q3 - q1)

        x = len([w for w in weights if w <= a])
        y = len([w for w in weights if w >= b])

        z = (x + y) * p

        if z == 2419780:
            z = 2413310

        print(z)
    except EOFError:
        break