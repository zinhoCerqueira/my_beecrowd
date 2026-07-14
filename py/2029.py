n = 3.14

while True:
    try:
        a = float(input())
        b = float(input())

        r = b / 2

        area = n * r * r
        altura = a / area

        print("ALTURA =", f"{altura:.2f}")
        print("AREA =", f"{area:.2f}")

    except EOFError:
        break