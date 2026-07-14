while True:
    try:

        distancia = int(input())

        if distancia == 0:
            exit()

        posicao = 2
        toques = 0

        for _ in range(distancia):

            x, y, z = map(int, input().split())

            if (x, y, z) != (0, 0, 0):

                if x == 0:
                    toques = toques + abs(posicao - 1)
                    posicao = 1
                
                elif y == 0:
                    toques = toques + abs(posicao - 2)
                    posicao = 2
                
                elif z == 0:
                    toques = toques + abs(posicao - 3)
                    posicao = 3

        print(toques)        

    except EOFError:
        break