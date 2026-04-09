menor, pos = 99999999, -1
a = int(input())

vetor = list(map(int, input().split()))

for index, x in enumerate(vetor):
    if x < menor:
        menor = x
        pos = index

print("Menor valor:", menor)
print("Posicao:", pos)

