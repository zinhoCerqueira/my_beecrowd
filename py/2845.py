from math import gcd

a = int(input())

lista = list(map(int, input().split()))
lista.sort()

candidato = max(lista) + 1

while True:

    gera = []

    for i in range(1, candidato):
        if gcd(i, candidato) == 1:
            gera.append(i)

    if gera == lista:
        print(candidato)
        break

    candidato += 1