quantidade = 0

total_figurinhas, total_carimbadas, compradas = map(int, input().split())
lista_carimbadas = list(map(int, input().split()))
lista_possuidas = list(map(int, input().split()))

set_possuidas = set(lista_possuidas)

for item in lista_carimbadas:
    if item in set_possuidas:
        quantidade += 1

print(total_carimbadas - quantidade)