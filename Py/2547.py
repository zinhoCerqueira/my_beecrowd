import math

while True:
    try:

        qtd, min_, max_ = map(int, input().split())
        cont = 0

        for i in range(qtd):
            alt = int(input())

            if min_ <= alt <= max_:
                cont += 1

        print(cont)

         
    except EOFError:
        break
