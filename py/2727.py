while True:
    try:
        n = int(input())

        for i in range(n):
            msg = input()

            qtd_space = msg.count(' ')
            qtd_ponto = len(msg.split()[0])

            letra = (qtd_space * 3) + qtd_ponto
            print(chr(ord('a') + letra - 1))


    except EOFError:
        break