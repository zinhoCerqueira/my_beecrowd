import math

while True:
    try:

        best = -1
        qtd = int(input())

        for i in range(qtd):
            duracao, distancia = (map(int, input().split()))

            if distancia / duracao > best:
                best = distancia / duracao
                print(i + 1)

        
         
    except EOFError:
        break
