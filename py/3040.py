qtd = int(input())

for _ in range(qtd):

    x, y, z = map(int, input().split())

    if (x >= 200 and x <= 300) and (y >= 50) and (z > 150) :
        print("Sim")
    else:
        print("Nao")
