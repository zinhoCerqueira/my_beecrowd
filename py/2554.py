while True:
    try:
        resposta = None

        n, d = map(int, input().split())

        for i in range(n):
            entrada = input()
            data, *lista = entrada.split()

            if resposta is None and all(x == '1' for x in lista):
                resposta = data

        if resposta:
            print(resposta)
        else:
            print("Pizza antes de FdI")

    except EOFError:
        break