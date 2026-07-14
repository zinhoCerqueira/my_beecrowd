z = int(input())

for i in range(z):
    a, b, c, d = input().split()
    
    a = int(a)
    b = int(b)
    c = float(c)
    d = float(d)

    anos = 0

    while a <= b and anos <= 100:
        a += int(a * c / 100)
        b += int(b * d / 100)
        anos += 1

    if anos > 100:
        print("Mais de 1 seculo.")
    else:
        print(f"{anos} anos.")