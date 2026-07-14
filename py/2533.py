
while True:
    try:
        a = int(input())

        s1, s2 = 0, 0

        for i in range(a):
            valor = list(map(int, input().split()))

            s1 = s1 + (valor[0] * valor[1])
            s2 = s2 + valor[1]

        s2 = s2 * 100

        print(f"{s1/s2:.4f}")
    except EOFError:
        break
