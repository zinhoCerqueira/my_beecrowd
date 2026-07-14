import math

n = int(input())

a = n / math.log(n)
b = 1.25506 * a

print(f"{a:.1f} {b:.1f}")