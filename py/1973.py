import sys
input = sys.stdin.readline

a = int(input())
carneiros = 0

lista = list(map(int, input().split()))
total = sum(lista) 

ponteiro = 0
way = set()

while 0 <= ponteiro < a:
    way.add(ponteiro)

    if lista[ponteiro] == 0:
        ponteiro = ponteiro - 1
        continue

    val = lista[ponteiro]
    lista[ponteiro] -= 1
    carneiros += 1

    if val % 2 == 1:
        ponteiro += 1
    else:
        ponteiro -= 1
    
print(len(way), total - carneiros)