m, q = 0, 0
for i in range (6):
    a = float(input())
    if a > 0:
        m = m + a
        q = q + 1

print(q, "valores positivos")
print(f"{(m/q):.1f}")