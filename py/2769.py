while True:
    try:
        etapas = int(input())
        e1, e2 = map(int, input().split())

        tempos_1  = list(map(int, input().split()))
        tempos_2  = list(map(int, input().split()))

        transicao_1 = list(map(int, input().split()))
        transicao_2 = list(map(int, input().split()))

        s1, s2 = map(int, input().split())

        l1 = e1 + tempos_1[0]
        l2 = e2 + tempos_2[0]

        for i in range(1, etapas):

            novo_l1 = min(
                l1 + tempos_1[i],
                l2 + transicao_2[i-1] + tempos_1[i]
            )

            novo_l2 = min(
                l2 + tempos_2[i],
                l1 + transicao_1[i-1] + tempos_2[i]
            )

            l1 = novo_l1
            l2 = novo_l2

        resposta = min(
            l1 + s1,
            l2 + s2
        )

        print(resposta)


        

    except EOFError:
        break