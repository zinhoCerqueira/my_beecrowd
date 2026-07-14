import math

while True:
    entrada = input().split()

    if len(entrada) == 1 and entrada[0] == '0':
        break

    a, b, c = map(int, entrada)

    area = a * b
    area_terreno = (area * 100) / c

    lado = int(math.sqrt(area_terreno))  # truncar

    print(lado)