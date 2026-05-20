
while True:
    try:

        n, i = map(int, input().split())
        contador = 0

        for j in range(n):
            x, y = map(int, input().split())

            if x == i and y == 0:
                contador = contador + 1

        print(contador)
         
    except EOFError:
        break
