total = 0
i = 0

while i < 2:

    n = float(input())

    if n >= 0 and n <= 10:
        total = total + n
        i = i + 1

    else:
        print("nota invalida")

print("media =", f"{(total/2):.2f}")