while True:
    try:
        n, m = map(int, input().split())

        matriz = [list(map(int, input().split())) for _ in range(n)]

        for i in range(n):
            for j in range(m):

                if matriz[i][j] == 1:
                    print(9, end="")
                    continue

                qtd = 0

                if i > 0 and matriz[i - 1][j] == 1:
                    qtd += 1

                if i < n - 1 and matriz[i + 1][j] == 1:
                    qtd += 1

                if j > 0 and matriz[i][j - 1] == 1:
                    qtd += 1

                if j < m - 1 and matriz[i][j + 1] == 1:
                    qtd += 1

                print(qtd, end="")

            print()

    except EOFError:
        break