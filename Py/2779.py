lista = set()

total = int(input())
figurinha = int(input())

for i in range(figurinha):
    lista.add(int(input()))

print(total - len(lista))
