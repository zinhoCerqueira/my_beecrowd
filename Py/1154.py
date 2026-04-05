a = 1
total = 0
contador = 0

while a > 0:
    a = int(input())
    if a > 0:
        total = a + total
        contador += 1

print(f"{total / contador:.2f}")