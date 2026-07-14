a, b, c = map(int, input().split())
x, y, z = map(int, input().split())

total = 0

if a < x:
    total = total + (x - a)

if b < y:
    total = total + (y - b)

if c < z:
    total = total + (z - c)

print(total)