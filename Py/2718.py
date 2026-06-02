n = int(input())

for i in range(n):

    contador, resposta = 0, 0

    x = int(input())

    while x > 0:

        if x % 2 == 1:
            contador += 1

        else:
            resposta = max(resposta, contador)
            contador = 0

        x = int(x / 2)

    resposta = max(resposta, contador)
    print(resposta)
