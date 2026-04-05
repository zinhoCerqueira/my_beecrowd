s = 0
d1 = 1
d2 = 1

while d1 <= 39:
    s = s + (d1 / d2)

    d1 = d1 + 2
    d2 = d2 * 2

print(f"{s:.2f}")