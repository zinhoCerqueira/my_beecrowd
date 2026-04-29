a, b = map(float, input().split())

aumento = b - a
x = (100 * aumento) / a

print(f"{x:.2f}%")