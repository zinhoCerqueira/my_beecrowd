while True:
    try:
        n = int(input())
        l = list(map(int, input().split()))

        total = sum(l)
        esquerda = 0
        menor = float('inf')

        for i in range(n):
            esquerda += l[i]
            direita = total - esquerda

            diff = abs(esquerda - direita)

            if diff < menor:
                menor = diff

        print(menor)

    except EOFError:
        break