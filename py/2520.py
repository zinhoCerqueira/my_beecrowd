while True:
    try:
        n, m = map(int, input().split())

        linha = []
        matriz = []

        posi_um_x = -1
        posi_um_y = -1

        posi_dois_x = -1
        posi_dois_y = -1

        for i in range(n):
            linha = list(map(int, input().split()))
            matriz.append(linha)

            for j in range(m):

                if matriz[i][j] == 1:
                    posi_um_x = i
                    posi_um_y = j

                if matriz[i][j] == 2:
                    posi_dois_x = i
                    posi_dois_y = j

        print((abs(posi_um_x - posi_dois_x)) + ((abs(posi_um_y - posi_dois_y))))

    except EOFError:
        break
