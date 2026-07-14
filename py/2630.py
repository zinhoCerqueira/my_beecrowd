a = int(input())

for i in range(a):

    tipo = input()
    x, y, z = map(int, input().split()) 

    if tipo == "min":
        p = min(x, y, z)
        p = int(p)
        print("Caso #" + str(i + 1) + ": " + str(p))

    elif tipo == "max":
        p = max(x, y, z)
        p = int(p)
        print("Caso #" + str(i + 1) + ": " + str(p))

    elif tipo == "mean":
        p = (x + y + z) / 3
        p = int(p)
        print("Caso #" + str(i + 1) + ": " + str(p))

    else:
        p = (0.3 * x) + (0.59 * y) + (0.11 * z)
        p = int(p)
        print("Caso #" + str(i + 1) + ": " + str(p))

