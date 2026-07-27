from functools import cache

DIRECOES = [
    (1, 0),   
    (-1, 0),  
    (0, 1),  
    (0, -1),  
    (-1, 1),  
    (1, -1)   
]

@cache
def contar_caminhos(x, y, passos):
    if passos == 0:
        return 1 if (x == 0 and y == 0) else 0

    caminhos = 0
    for dx, dy in DIRECOES:
        caminhos += contar_caminhos(x + dx, y + dy, passos - 1)

    return caminhos



casos_de_teste = int(input())

for _ in range(casos_de_teste):
    n = int(input())
    resposta = contar_caminhos(0, 0, n)
    print(resposta)